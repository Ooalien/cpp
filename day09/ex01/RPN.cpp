#include "RPN.hpp"

bool RPN::checknumber(char c)
{
    if (c >= '0' && c <= '9')
        return (true);
    if (c != '+' && c != '-' && c != '*' && c != '/')
    {
        std::cerr << "Error: bad input." << std::endl;
        exit(1);
    }
    return (false);
}

RPN::RPN(std::string &x)
{
    std::string tmp;
    int i;
    int r;

    i = 0;
    r = 0;
    std::string tmp1;
    for (size_t i = 0; i < x.size(); i++)
    {
        if (i > 0)
        {
            if (x[i] != ' ' && x[i - 1] != ' ')
                tmp1.push_back(' ');
        }
        tmp1.push_back(x[i]);
    }
    x = tmp1;
    std::istringstream ss(x);
    while (ss >> tmp)
    {
        if (!checknumber(tmp[0]) && (i == 0 || i == 1))
        {
            std::cerr << "Error: bad input.\n";
            exit(1);
        }
        else if (checknumber(tmp[0]))
            s.push(int(tmp[0]) - 48);
        else if (tmp[0] == '+' && s.size() >= 2)
        {
            r = s.top();
            s.pop();
            r = s.top() + r;
            s.pop();
            s.push(r);
        }
        else if (tmp[0] == '-' && s.size() >= 2)
        {
            r = s.top();
            s.pop();
            r = s.top() - r;
            s.pop();
            s.push(r);
        }
        else if (tmp[0] == '*' && s.size() >= 2)
        {
            r = s.top();
            s.pop();
            r = s.top() * r;
            s.pop();
            s.push(r);
        }
        else if (tmp[0] == '/' && s.size() >= 2)
        {
            // try
            // {
            r = s.top();
            s.pop();
            if (r == 0)
            {
                std::cerr << "Error: can't devide by zero." << std::endl;
                exit(0);
            }
            r = s.top() / r;
            s.pop();
            s.push(r);
            // }
            // catch (std::exception &e)
            // {
            //     std::cout << e.what() << std::endl;
            // }
        }
        i++;
    }
    if (s.size() != 1)
    {
        std::cerr << "Error: bad input.\n";
        exit(1);
    }
    std::cout << s.top() << std::endl;
}

std::stack<int> &RPN::getstack()
{
    return s;
}

RPN &RPN::operator=(RPN &x)
{
    s = x.getstack();
    return (*this);
}
