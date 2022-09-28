#include "FragTrap.hpp"

FragTrap::FragTrap( void )
{
    this->name = "";
    this->hit_point = 100;
    this->energy_p = 100;
    this->attack_d = 30;
    this->max_p = this-> energy_p;
    std::cout << "Default constractor for FragTrap called\n";
}

FragTrap::FragTrap( std::string name )
{
    this->name = name;
    this->hit_point = 100;
    this->energy_p = 100;
    this->attack_d = 30;
    this->max_p = this-> energy_p;
    std::cout << "Name constractor for FragTrap called\n";
}

FragTrap::FragTrap(const FragTrap &cl)
{
    *this = cl;
    std::cout << "Copy constractor for FragTrap called\n";
}

FragTrap::~FragTrap( void )
{
    std::cout << "Destractor for FragTrap called\n";
}

std::string FragTrap::getname()
{
    return this->name;
}

void    FragTrap::highFivesGuys( void )
{
    std::cout << "Give me high fives Guys!!" << std::endl;
}
