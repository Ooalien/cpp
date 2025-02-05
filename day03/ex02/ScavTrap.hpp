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

        ScavTrap    &operator=(const ScavTrap &x);

        std::string getname();

        void        attack(const std::string& target);
        void        guardGate( void );

} ;

#endif
