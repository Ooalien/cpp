#pragma once

# include <iostream>
# include <vector>
# include <algorithm>

class Span{
    public:
        Span(unsigned int n);
        Span(const Span &s);
        ~Span();

        Span &operator=(const Span &s);

        void            addNumber(int);
        void            addNumber(std::vector<int>::iterator &begin, std::vector<int>::iterator &end);
        unsigned int    shortestSpan(void);
        unsigned int    longestSpan(void);

    private:
        std::vector<int> v;
        size_t           size;
    public :
        class Containerisfull : public std::exception{
            public:
                virtual const char *what() const throw() {
                    return "Container is full Adding failed.";
                }
        };

        class NoSpan : public std::exception{
            public:
                virtual const char *what() const throw() {
                    return "No Span Can Be Found.";
                }
        };
};