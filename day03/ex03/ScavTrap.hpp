#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    public:
        ScavTrap( void );
        ScavTrap( std::string name );
        ScavTrap(const ScavTrap &cl);
        ~ScavTrap( void );

        ScavTrap    &operator=(const ScavTrap &x);

        std::string getname();

        void        attack(const std::string& target) const;
        void        guardGate( void );
        static      const int   energy_pp = 50;

} ;

#endif
