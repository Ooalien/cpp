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
    std::istringstream ss(x);
    std::string tmp;
    int i;
    int r;

    i = 0;
    r = 0;
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
            r = s.top();
            s.pop();
            r = s.top() / r;
            s.pop();
            s.push(r);
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
