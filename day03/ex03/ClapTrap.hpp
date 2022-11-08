#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    public:
        ClapTrap( void );
        ClapTrap( std::string name );
        ClapTrap(const ClapTrap &cl);
        ~ClapTrap( void );
        std::string getname();
        
        ClapTrap    &operator=(const ClapTrap &x);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
    protected:
        std::string name;
        int         hit_point;
        int         energy_p;
        int         attack_d;
        int         max_p;
} ;

#endif
