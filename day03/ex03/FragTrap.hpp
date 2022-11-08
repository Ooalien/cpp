#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap( void );
        FragTrap( std::string name );
        FragTrap(const FragTrap &cl);
        ~FragTrap( void );

        std::string getname();

        FragTrap    &operator=(const FragTrap &x);
        
        void         highFivesGuys(void);

} ;

#endif
