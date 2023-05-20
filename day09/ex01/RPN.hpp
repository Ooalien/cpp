#pragma once

#include <iostream>
#include <sstream>
#include <stack>

class RPN
{
    std::stack<int> s;

public:
    RPN() {}
    RPN(std::string &);
    RPN(RPN &) {}
    ~RPN() {}

    std::stack<int> &getstack();

    bool checknumber(char c);

    RPN &operator=(RPN &);
};