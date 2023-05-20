#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        std::string filename(av[1]);
        BitcoinExchange x(filename);
    }
    else
        std::cout << "Error: could not open file." << std::endl;
    return 0;
}