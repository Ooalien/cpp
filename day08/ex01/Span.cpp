
# include "Span.hpp"

Span::Span(unsigned int n): size(n)
{
}

Span::Span(const Span &s): v(s.v), size(s.size)
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
