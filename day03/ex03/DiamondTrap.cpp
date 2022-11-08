#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )
{
    ClapTrap::name = "_clap_name";
    this->name = "";
    this->hit_point = 100;
    this->energy_p = 50;
    this->attack_d = 30;
    this->max_p = this-> energy_p;
    std::cout << "Default constractor for DiamondTrap called\n";
}

DiamondTrap::DiamondTrap( std::string name )
{
    ClapTrap::name = name + "_clap_name";
    this->name = name;
    this->hit_point = 100;
    this->energy_p = 50;
    this->attack_d = 30;
    this->max_p = this-> energy_p;
    std::cout << "Name constractor for DiamondTrap called\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &cl)
{
    *this = cl;
    std::cout << "Copy constractor for DiamondTrap called\n";
}

DiamondTrap::~DiamondTrap( void )
{
    std::cout << "Destractor for DiamondTrap called\n";
}

std::string DiamondTrap::getname()
{
    return this->name;
}

void    DiamondTrap::whoAmI( void ) const
{
    std::cout << "I am, " << this->name << " and my ClapTrap name is " << ClapTrap::name << std::endl;
}

void        DiamondTrap::attack(const std::string& target) const
{
    ScavTrap::attack(target);
}

DiamondTrap    &DiamondTrap::operator=(const DiamondTrap &x)
{
    this->attack_d = x.attack_d;
    this->name = x.name;
    this->energy_p = x.energy_p;
    this->hit_point = x.hit_point;
    return *this;
}
