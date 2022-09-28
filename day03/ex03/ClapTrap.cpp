#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{
    this->name = "";
    this->hit_point = 10;
    this->energy_p = 10;
    this->attack_d = 0;
    this->max_p = this-> energy_p;
    std::cout << "Default constractor called\n";
}

ClapTrap::ClapTrap( std::string name )
{
    this->name = name;
    this->hit_point = 10;
    this->energy_p = 10;
    this->attack_d = 0;
    this->max_p = this-> energy_p;
    std::cout << "Name constractor called\n";
}

ClapTrap::ClapTrap(const ClapTrap &cl)
{
    *this = cl;
    std::cout << "Copy constractor called\n";
}

ClapTrap::~ClapTrap( void )
{
    std::cout << "Destractor called\n";
}

std::string ClapTrap::getname()
{
    return this->name;
}

void ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap " << this->getname() << " attacks " << target << ", causing " << this->attack_d <<  " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->energy_p -= amount;
    if (this->energy_p <= 0)
    {
        std::cout << "ClapTrap " << this->getname() << " take " << amount << " dammage point!" << std::endl;
        std::cout << "He's energy point is 0, and he's dead\n";
    } 
    else
        std::cout << "ClapTrap " << this->getname() << " take " << amount << " dammage point!" << std::endl; 
}

void ClapTrap::beRepaired(unsigned int amount)
{
    this->energy_p += amount;
    if (this->energy_p >= this->max_p)
    {
        std::cout << "ClapTrap " << this->getname() << " get " << amount << " heal point!" << std::endl;
        std::cout << "He's energy point is max\n";
    } 
    else
        std::cout << "ClapTrap " << this->getname() << " get " << amount << " heal point!" << std::endl; 
}
