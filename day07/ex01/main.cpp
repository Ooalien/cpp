#include "iter.hpp"

template<typename T> void   p(T p)
{
    std::cout << p;
}

int main()
{
    std::cout << std::endl << "--------- string ----------" << std::endl;
    std::string s[3];
    s[0] = "hey";
    s[1] = " iam ali ";
    s[2] = " and you?";
    iter(s, 3, p);
    std::cout << std::endl << "--------- int ----------" << std::endl;
    int t[3];
    t[0] = 12;
    t[1] = 34;
    t[2] = 56;
    iter(t, 3, p);
    return (0);
}