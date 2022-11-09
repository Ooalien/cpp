#include "ClapTrap.hpp"

int main()
{
    ClapTrap clp("ali");
    ClapTrap clop("meki");
    clp.attack("meki");
    clop.beRepaired(3);
    clop.beRepaired(5);
    clop.beRepaired(5);
    clop.beRepaired(3);
    clop.beRepaired(5);
    clop.beRepaired(5);
    clop.beRepaired(5);
    clop.beRepaired(3);
    clop.beRepaired(5);
    clop.beRepaired(5);
    clop.attack("  ");
    clp.takeDamage(11);
    return 0;
}