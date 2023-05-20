
#include "easyfind.hpp"
#include <vector>


int main()
{
    std::vector<int> vec;

    vec.push_back(44);
    vec.push_back(0);
    vec.push_back(-123);
    vec.push_back(1337);
    vec.push_back(-42);
    try
    {
        std::vector<int>::iterator find = easyfind< std::vector<int> >(vec, 1337);
        std::cout << *find << std::endl;    
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
