#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap Frag("Frag");
    ScavTrap ali("ali");
    ClapTrap meki("meki"); 

	Frag.attack("babak");
	Frag.takeDamage(6);
	Frag.beRepaired(4);
	Frag.highFivesGuys();
	Frag.beRepaired(8);
    ali.attack("meki");
    ali.takeDamage(5);
    ali.guardGate();
    ali.beRepaired(7);
    ali.takeDamage(16); 
    meki.attack("ali");
    meki.takeDamage(6);
    meki.beRepaired(4);
    meki.beRepaired(8);
    return 0;
}