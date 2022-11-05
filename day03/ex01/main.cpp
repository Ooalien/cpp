#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap ali("ali");
    // ClapTrap meki("meki");  
    ali.attack("meki");
    ali.takeDamage(5);
    ali.beRepaired(3);
    ali.takeDamage(2);
    ali.guardGate();
    ali.beRepaired(7);
    ali.takeDamage(16); 
    // meki.attack("ali");
    // meki.takeDamage(6);
    // meki.beRepaired(4);
    // meki.takeDamage(3);
    // meki.beRepaired(8);
    // meki.takeDamage(17);
    return 0;
}