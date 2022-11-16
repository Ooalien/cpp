#include "iter.hpp"

void    p(std::string p)
{
    std::cout << p;
}

int main()
{
    std::string s[3];
    s[0] = "hey";
    s[1] = " iam ali ";
    s[2] = " and you?";
    iter(s, 3, p);
    
    return (0);
}