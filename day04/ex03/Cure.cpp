
#include "Cure.hpp"

Cure::Cure():AMateria("cure")
{
    std::cout << "Constractor Cure called." << std::endl;
}

Cure::Cure(const Cure &x):AMateria("cure")
{
    std::cout << "Copy Constractor Cure called." << std::endl;
}

Cure::~Cure()
{
    std::cout << "Destractor Cure called." << std::endl;
}

Cure &Cure::operator=(const Cure &x)
{
    this->type = x.getType();
    std::cout << "Copy assignement opertor called." << std::endl;
    return *this;
}

AMateria*   Cure::clone() const
{
    return (new Cure());
}

void    Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
