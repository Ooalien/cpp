#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap( std::string name );
        FragTrap(const FragTrap &cl);
        ~FragTrap( void );

        std::string getname();
        
        void         highFivesGuys(void);

    private:
        FragTrap( void );
} ;

#endif