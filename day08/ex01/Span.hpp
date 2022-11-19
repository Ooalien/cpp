#pragma once

# include <iostream>
# include <vector>

class Span{
    public:
        Span(unsigned int n);
        Span(const Span &s);
        ~Span();

        Span &operator=(const Span &s);

    private:
        std::vector<int> v;
        size_t           size;
}