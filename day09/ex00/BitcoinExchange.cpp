
#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    // Default constractor;
}

BitcoinExchange::BitcoinExchange(std::string &file)
{
    std::ifstream f("data.csv");
    std::ifstream f1(file);
    std::string tmp;

    // f.open();
    if (f1.fail() || f1.fail())
    {
        std::cerr << "Error: could not open file." << std::endl;
        exit(1);
    }
    while (getline(f, tmp))
    {
        tmp.replace(tmp.find(","), 1, " ");
        std::istringstream ss(tmp);
        std::pair<std::string, std::string> p;
        ss >> p.first;
        ss >> p.second;
        tatabase.insert(p);
        // std::cout << p.first << " <--- first | second ----> " << p.second << std::endl;
    }
    handle_input(f1);
}

bool isNumber(const std::string &str)
{
    if (str.empty())
        return false;

    for (size_t i = 0; i < str.size(); i++)
    {
        if (!std::isdigit(str[i]))
            return false;
    }

    return true;
}

bool check_input(std::string s)
{
    std::istringstream ss(s);
    std::string tmp;
    int i = 0;

    while (ss >> tmp)
        i++;

    // std::cout << i << std::endl;

    if (i == 3)
        return 1;
    return 0;
}

int check_date(std::string s)
{
    if (std::count(s.begin(), s.end(), '-') != 2 || s.size() != 10)
    {
        std::cout << "Error: bad date." << std::endl;
        return 0;
    }
    if (s.find("-") != 4 || s[7] != '-' || !isNumber(s.substr(0, 4)) || !isNumber(s.substr(5, 2)) || !isNumber(s.substr(8, 2)))
    {
        std::cout << "Error: bad date." << std::endl;
        return 0;
    }
    if (std::stoi(s.substr(0, 4)) > 2023 || std::stoi(s.substr(0, 4)) <= 2000)
    {
        std::cout << "Error: bad date." << std::endl;
        return 0;
    }
    if (std::stoi(s.substr(5, 2)) > 12 || std::stoi(s.substr(5, 2)) < 01)
    {
        std::cout << "Error: bad date." << std::endl;
        return 0;
    }
    if (std::stoi(s.substr(8, 2)) > 31 || std::stoi(s.substr(8, 2)) < 01)
    {
        std::cout << "Error: bad date." << std::endl;
        return 0;
    }
    return 1;
}

void BitcoinExchange::handle_input(std::ifstream &f)
{
    std::string tmp;
    int i = 0;

    // if (getline(f, tmp))
    // {
    while (getline(f, tmp))
    {
        if (tmp == "date | value" || tmp.empty())
            continue;
        i++;
        std::string date;
        float v;
        std::string value;
        std::istringstream ss(tmp);
        ss >> date;
        if (check_date(date) == 0)
            continue;
        ss >> value;
        if (value != "|" || !check_input(tmp))
        {
            std::cout << "Error: bad input." << std::endl;
            continue;
        }
        ss >> value;

        if (date.empty() || value.empty())
        {
            std::cout << "Error: bad input => " << date << value << std::endl;
            continue;
        }
        else if (value[0] == '-')
        {
            std::cout << "Error: not a positive number." << std::endl;
            continue;
        }
        if (std::count(value.begin(), value.end(), '.') > 1)
        {
            std::cout << "Error: invalid value." << std::endl;
            continue;
        }
        try
        {
            v = std::stof(value);
        }
        catch (const std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
        if ((v) >= 1000)
            std::cout << "Error: too large a number." << std::endl;
        else
            print_result(date, v);
    }
    if (i == 0)
        std::cout << "Error: empty file." << std::endl;
}

void BitcoinExchange::print_result(std::string &d, float &v)
{
    if (tatabase.find(d) != tatabase.end())
    {
        float s;
        s = stof((*tatabase.find(d)).second);
        std::cout << d << " => " << v << " = " << static_cast<float>(s * v) << std::endl;
    }
    else
    {
        float s;
        if (tatabase.lower_bound(d) == tatabase.begin())
            s = stof((*(tatabase.lower_bound(d))).second);
        else
            s = stof((*(--tatabase.lower_bound(d))).second);
        std::cout << d << " => " << v << " = " << static_cast<float>(s * v) << std::endl;
    }
}

BitcoinExchange::BitcoinExchange(BitcoinExchange &x)
{
    this->tatabase = x.gettatabase();
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange &x)
{
    this->tatabase = x.gettatabase();
    return (*this);
}

BitcoinExchange::~BitcoinExchange()
{
    // Destructor;
}

std::map<std::string, std::string> &BitcoinExchange::gettatabase(void)
{
    return tatabase;
}