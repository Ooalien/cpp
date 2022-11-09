#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
    this->name = "";
    std::cout << "Default constractor for ScavTrap called\n";
}

ScavTrap::ScavTrap( std::string name )
{
    this->name = name;
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

void ScavTrap::attack(const std::string& target)
{
    std::cout << "ScavTrap " << this->getname() << " attacks " << target << ", causing " << this->attack_d <<  " points of damage!" << std::endl;
}
void		ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << this->name << " entered Gate Keeper mode!" << std::endl;
}

ScavTrap    &ScavTrap::operator=(const ScavTrap &x)
{
    this->attack_d = x.attack_d;
    this->name = x.name;
    this->energy_p = x.energy_p;
    this->hit_point = x.hit_point;
    return *this;
}
