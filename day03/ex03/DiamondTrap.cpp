#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )
{
    ClapTrap::name = "_clap_name";
    this->name = "";
    this->hit_point = FragTrap::hit_point;
    this->energy_p = ScavTrap::energy_p;
    this->attack_d = FragTrap::attack_d;
    this->max_p = this-> energy_p;
    std::cout << "Default constractor for DiamondTrap called\n";
}

DiamondTrap::DiamondTrap( std::string name )
{
    ClapTrap::name = name + "_clap_name";
    this->name = name;
    this->hit_point = FragTrap::hit_point;
    this->energy_p = ScavTrap::energy_p;
    this->attack_d = FragTrap::attack_d;
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
