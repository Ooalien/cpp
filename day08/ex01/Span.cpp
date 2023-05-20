
#include "Span.hpp"

Span::Span(unsigned int n) : size(n)
{
}

Span::Span(const Span &s) : v(s.v), size(s.size)
{
}

Span::~Span()
{
}

Span &Span::operator=(const Span &s)
{
    if (this != &s)
    {
        this->v = s.v;
        this->size = s.size;
    }
    return *this;
}

void Span::addNumber(int x)
{
    if (this->v.size() < size)
        this->v.push_back(x);
    else
        throw Containerisfull();
}

void    Span::addNumber(std::vector<int>::iterator &begin, std::vector<int>::iterator &end)
{
    int distance = std::distance(begin, end);
    if (distance + this->v.size() > this->size)
    {
        this->v.insert(v.end(), begin, begin + this->size - this->v.size());
        throw Containerisfull();
    }
    else
        this->v.insert(v.end(), begin, end);
}

unsigned int Span::shortestSpan(void)
{
    int res = 10000;
    if (this->v.size() < 2)
        throw NoSpan();
    sort(v.begin(), v.end());
    for (unsigned long i = 0; i < v.size() - 1; i++){
        if (res > v[i + 1] - v[i])
            res = v[i + 1] - v[i];
    }
    return (res);
}

unsigned int Span::longestSpan(void)
{
    if (this->v.size() < 2)
        throw NoSpan();
    return (*max_element(v.begin(),v.end()) - *min_element(v.begin(),v.end()));
}
