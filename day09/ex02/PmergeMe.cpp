#include "PmergeMe.hpp"

PmergeMe::PmergeMe(char **av) {
    parser(av);
    (void)av;
}

bool is_digits(const std::string &str)
{
    return str.find_first_not_of("0123456789") == std::string::npos;
}

void    PmergeMe::parser(char **av) {
    for (int i = 0; av[i]; i++)
    {
        std::string tmp(av[i]);
        if (is_digits(tmp))
        {
            if (stol(tmp) <= INT_MAX)
            {
                try {
                    list.push_back(stoi(tmp));
                    deque.push_back(stoi(tmp));
                } catch (std::exception &e) {
                    std::cout << e.what() << std::endl;
                }
            } else {    
                std::cout << "Error." << std::endl;
                exit(0);
            }
            // std::cout << stoi(tmp) << std::endl;
        }
        else// if (tmp[0] == '-')
        {
            std::cout << "Error." << std::endl;
            exit(0);
        }
    }
}

PmergeMe &PmergeMe::operator=(PmergeMe &o)
{
    list = o.getlist();
    deque = o.getdeque();
    return (*this);
}

std::list<int> PmergeMe::getlist()
{
    return list;
}

std::deque<int> PmergeMe::getdeque()
{
    return deque;
}

