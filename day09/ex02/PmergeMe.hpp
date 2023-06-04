#pragma once

#include <iostream>
#include <sstream>
#include <list>
#include <deque>
#include <ctime>
#include <sys/time.h>

class PmergeMe
{
    std::list<int> list;
    std::deque<int> deque;

public:
    PmergeMe() {}
    PmergeMe(char **av);
    PmergeMe(PmergeMe &) {}
    ~PmergeMe() {}

    PmergeMe &operator=(PmergeMe &);

    std::list<int> getlist();
    std::deque<int> getdeque();

    void parser(char **av);
    void print(double, double);
};