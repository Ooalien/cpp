

#include "Ice.hpp"

Ice::Ice():AMateria("ice")
{
    // std::cout << "Constractor Ice called." << std::endl;
}

Ice::Ice(const Ice &x):AMateria(x.type)
{
    // std::cout << "Copy Constractor Ice called." << std::endl;
}

Ice::~Ice()
{
    // std::cout << "Destractor Ice called." << std::endl;
}

Ice &Ice::operator=(const Ice &x)
{
    this->type = x.getType();
    // std::cout << "Copy assignement opertor called." << std::endl;
    return *this;
}

AMateria*   Ice::clone() const
{
    return (new Ice());
}

void    Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at  " << target.getName() << " *" << std::endl;
}
