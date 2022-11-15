#include <iostream>

int     Checkifdigit(std::string &c)
{
    for (int i = 0; c[i];i++)
    {
        if (c[0] == '-')
            continue;
        if (!isdigit(c[i]))
            return 0;
    }
    return (1);
}

int     Checkiffloat(std::string c)
{
    c.erase(c.find("."), 1);
    c.erase(c.length() - 1, 1);
    for (int i = 0; c[i];i++)
    {
        if (c[0] == '-')
            continue;
        if (!isdigit(c[i]))
            return 0;
    }
    return (1);
}

int     Checkifdouble(std::string c)
{
    c.erase(c.find("."), 1);
    for (int i = 0; c[i];i++)
    {
        if (c[0] == '-')
            continue;
        if (!isdigit(c[i]))
            return 0;
    }
    return (1);
}

std::string dd()
{
    return ".0";
}

std::string ff()
{
    return ".0f";
}

std::string fff()
{
    return "f";
}

void    my_printer(void)
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: nanf" << std::endl;
    std::cout << "double: nan" << std::endl;
}

void    my_printer(int x)
{
    if (static_cast<char>(x) > 31 && static_cast<char>(x) < 127)
        std::cout << "char: '" << static_cast<char>(x) << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << static_cast<int>(x) << std::endl;
    std::cout << "float: " << static_cast<float>(x) << ff() << std::endl;
    std::cout << "double: " << static_cast<double>(x) << dd() << std::endl;
}

void    my_printer(float x)
{
    if (static_cast<char>(x) > 31 && static_cast<char>(x) < 127)
        std::cout << "char: '" << static_cast<char>(x) << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << static_cast<int>(x) << std::endl;
    std::cout << "float: " << static_cast<float>(x) << ((x == (int)x)?ff():fff()) << std::endl;
    std::cout << "double: " << static_cast<double>(x) << ((x == (int)x)?dd():"")  << std::endl;
}

void    my_printer(double x)
{
    if (static_cast<char>(x) > 31 && static_cast<char>(x) < 127)
        std::cout << "char: '" << static_cast<char>(x) << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << static_cast<int>(x) << std::endl;
    std::cout << "float: " << static_cast<float>(x) << ((x == (int)x)?ff():fff()) << std::endl;
    std::cout << "double: " << static_cast<double>(x) << ((x == (int)x)?dd():"") << std::endl;
}

int main(int ac, char **av)
{
    float   f;
    double  d;
    int     i;
    char    c;
    int     flag = 0;
    if (ac == 2)
    {
        std::string s(av[1]);
        if (s[s.length() - 1] == 'f' && s.find(".") < s.length() && Checkiffloat(s))
        {
            std::cout << "*  float  *" <<std::endl;
            f = stof(s);
            flag = 1;
        }
        else if (s.find(".") < s.length() && Checkifdouble(s))
        {
            std::cout << "*  double  *" <<std::endl;
            d = stof(s);
            flag = 2;
        }
        else if (Checkifdigit(s))
        {
            std::cout << "*  integer  *" <<std::endl;
            i = stoi(s);
            flag = 4;
        }
        else if (s.length() == 1)
        {
            std::cout << "*  character  *" <<std::endl;
            c = s[0];
            flag = 3;
        }
        if (flag == 0)
            my_printer();
        else if (flag == 1)
            my_printer(f);
        else if (flag == 2)
            my_printer(d);
        else if (flag == 3)
            my_printer(c);
        else
            my_printer(i);
    }
    else
        std::cout << "Bad arguments.\n";
    return (0);
}