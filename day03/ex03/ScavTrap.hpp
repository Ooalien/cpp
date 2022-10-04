#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    public:
        ScavTrap( std::string name );
        ScavTrap(const ScavTrap &cl);
        ~ScavTrap( void );

        std::string getname();

        void        attack(const std::string& target) const;
        void        guardGate( void );

    protected:
        ScavTrap( void );
} ;

#endif