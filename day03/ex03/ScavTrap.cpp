#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
    this->name = "";
    this->hit_point = 100;
    this->energy_p = 50;
    this->attack_d = 20;
    this->max_p = this-> energy_p;
    std::cout << "Default constractor for ScavTrap called\n";
}

ScavTrap::ScavTrap( std::string name )
{
    this->name = name;
    this->hit_point = 100;
    this->energy_p = 50;
    this->attack_d = 20;
    this->max_p = this-> energy_p;
    std::cout << "Name constractor for ScavTrap called\n";
}

ScavTrap::ScavTrap(const ScavTrap &cl)
{
    *this = cl;
    std::cout << "Copy constractor for ScavTrap called\n";
}

ScavTrap::~ScavTrap( void )
{
    std::cout << "Destractor for ScavTrap called\n";
}

std::string ScavTrap::getname()
{
    return this->name;
}

void ScavTrap::attack(const std::string& target) const
{
    std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attack_d <<  " points of damage!" << std::endl;
}
void		ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << this->name << " entered Gate Keeper mode!" << std::endl;
}
