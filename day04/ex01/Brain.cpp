#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Constractor for Brain is called." << std::endl; 
}


Brain::Brain(const Brain &other)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
    std::cout << "Copy constractor is called." << std::endl;
}

Brain   &Brain::operator=(const Brain &other){
    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
    std::cout << "Copy assignement operator is called." << std::endl;
    return *this;
}

Brain::~Brain()
{
    std::cout << "Destractor for Brain is called." << std::endl; 
}