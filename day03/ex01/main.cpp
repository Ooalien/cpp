#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap ali("ali");
    // ClapTrap floki("floki");  
    ali.attack("floki");
    ali.takeDamage(5);
    ali.beRepaired(3);
    ali.takeDamage(2);
    ali.guardGate();
    ali.beRepaired(7);
    ali.takeDamage(16); 
    // floki.attack("ali");
    // floki.takeDamage(6);
    // floki.beRepaired(4);
    // floki.takeDamage(3);
    // floki.beRepaired(8);
    // floki.takeDamage(17);
    return 0;
}