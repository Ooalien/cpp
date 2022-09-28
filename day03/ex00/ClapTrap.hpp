#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    public:
        ClapTrap( std::string name );
        ClapTrap(const ClapTrap &cl);
        ~ClapTrap( void );
        std::string getname();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
    private:
        std::string name;
        int         hit_point;
        int         energy_p;
        int         attack_d;
        int         max_p;
        ClapTrap( void );
} ;

#endif
