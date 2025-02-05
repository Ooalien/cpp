#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{
    this->name = "";
    this->hit_point = 100;
    this->energy_p = 50;
    this->attack_d = 20;
    this->max_p = this->hit_point;
    std::cout << "Default constractor called\n";
}

ClapTrap::ClapTrap( std::string name )
{
    this->name = name;
    this->hit_point = 100;
    this->energy_p = 50;
    this->attack_d = 20;
    this->max_p = this->hit_point;
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
    if (this->energy_p && this->hit_point)
    {
        std::cout << "ClapTrap " << this->getname() << " attacks " << target << ", causing " << this->attack_d <<  " points of damage!" << std::endl;
        this->energy_p--;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->hit_point -= amount;
    if (this->hit_point <= 0)
    {
        std::cout << "ClapTrap " << this->getname() << " take " << amount << " dammage point!" << std::endl;
        std::cout << "He's hit point is 0, and he's dead\n";
    }
    else
        std::cout << "ClapTrap " << this->getname() << " take " << amount << " dammage point!" << std::endl; 
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energy_p && this->hit_point)
    {
        this->energy_p--;
        this->hit_point += amount;
        if (this->hit_point >= this->max_p)
        {
            std::cout << "ClapTrap " << this->getname() << " get " << amount << " heal point!" << std::endl;
            std::cout << "He's hit point is max\n";
        } 
        else
            std::cout << "ClapTrap " << this->getname() << " get " << amount << " heal point!" << std::endl; 
    }
}

ClapTrap    &ClapTrap::operator=(const ClapTrap &x)
{
    this->attack_d = x.attack_d;
    this->energy_p = x.energy_p;
    this->hit_point = x.hit_point;
    this->name = x.name;
    return *this;
}
