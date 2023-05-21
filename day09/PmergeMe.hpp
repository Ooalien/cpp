#pragma once

class PmergeMe
{

public:
    PmergeMe() {}
    PmergeMe(PmergeMe &) {}
    ~PmergeMe() {}

    PmergeMe &operator=(PmergeMe &);
};