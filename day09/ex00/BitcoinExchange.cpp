
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

void BitcoinExchange::handle_input(std::ifstream &f)
{
    std::string tmp;

    if (getline(f, tmp))
    {
        while (getline(f, tmp))
        {
            std::string date;
            float v;
            std::string value;
            std::istringstream ss(tmp);
            ss >> date;
            ss >> value;
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

            try
            {
                v = std::stof(value);
            }
            catch (const std::exception &e)
            {
                std::cout << e.what() << std::endl;
            }
            if ((v) >= INT_MAX)
                std::cout << "Error: too large a number." << std::endl;
            else
                print_result(date, v);
        }
    }
    else
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