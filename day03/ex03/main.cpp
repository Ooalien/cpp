#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap lmekki("lmekki");

    lmekki.attack("nta");
    lmekki.takeDamage(6);
    lmekki.beRepaired(4);
    lmekki.guardGate();
    lmekki.highFivesGuys();
    lmekki.whoAmI();
    lmekki.beRepaired(8);
    lmekki.takeDamage(20);
    return 0;
}