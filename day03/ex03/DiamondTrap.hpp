#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap , public FragTrap
{
    public:
        DiamondTrap( void );
        DiamondTrap( std::string name );
        DiamondTrap(const DiamondTrap &cl);
        ~DiamondTrap( void );

        DiamondTrap    &operator=(const DiamondTrap &x);


        std::string getname();
        
        void        whoAmI() const;
        using ScavTrap::attack;
    private:
        std::string name;
} ;

#endif
