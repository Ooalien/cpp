#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac >= 2)
    {
        PmergeMe p(&av[1]);
    }
    else
        std::cout << "Error: bad arguments." << std::endl;
    return 0;
}