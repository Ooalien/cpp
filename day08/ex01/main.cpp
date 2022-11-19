
#include "Span.hpp"

int main()
{
    try
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << "ShortestSpan: " << sp.shortestSpan() << std::endl;
        std::cout << "LongestSpan: " << sp.longestSpan() << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        std::vector<int> v;

        v.push_back(6);
        v.push_back(32);
        v.push_back(55);
        v.push_back(42);
        std::vector<int>::iterator begin = v.begin();
        std::vector<int>::iterator end = v.end();
        Span sp = Span(10);
        for (int i = 0; i < 5; i++)
            sp.addNumber(i);
        sp.addNumber(begin, end);
        std::cout << "ShortestSpan: " << sp.shortestSpan() << std::endl;
        std::cout << "LongestSpan: " << sp.longestSpan() << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
