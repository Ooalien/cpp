#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap , public FragTrap
{
    public:
        DiamondTrap( std::string name );
        DiamondTrap(const DiamondTrap &cl);
        ~DiamondTrap( void );

        DiamondTrap    &operator=(const DiamondTrap &x);


        std::string getname();
        
        void        whoAmI() const;
        void        attack(const std::string& target) const;
    private:
        std::string name;
        DiamondTrap( void );
} ;

#endif
