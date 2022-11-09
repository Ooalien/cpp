#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap( void );
        ScavTrap( std::string name );
        ScavTrap(const ScavTrap &cl);
        ~ScavTrap( void );

        std::string getname();

        ScavTrap    &operator=(const ScavTrap &x);

        void        attack(const std::string& target);
        void        guardGate( void );

} ;

#endif
