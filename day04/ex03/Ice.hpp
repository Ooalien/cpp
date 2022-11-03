
#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    public :
        Ice();
        Ice(const Ice &x);
        ~Ice();

        Ice &operator=(const Ice &x);

        AMateria*   clone() const;
        void    use(ICharacter& target);
};

#endif
