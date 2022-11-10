#include <iostream>

int     Checkifdigit(std::string &c)
{
    for (int i = 0; c[i];i++)
    {
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
    std::cout <<  << std::endl;
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
        if (s[s.length() - 1] == 'f' && s.find("."))
        {
            f = stof(s);
            flag = 1;
        }
        else if (s.find("."))
        {
            d = stod(s);
            flag = 2;
        }
        else if (s.length() == 1)
        {
            c = s[0];
            flag = 3;
        }
        else if (Checkifdigit(s))
        {
            i = stoi(s);
            flag = 4;
        }
        if (flag == 0)
            my_printer();
    }
    else
        std::cout << "Bad arguments.\n";
    return (0);
}