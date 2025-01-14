
#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public :
        Cure();
        Cure(const Cure &x);
        ~Cure();

        Cure &operator=(const Cure &x);

        AMateria*   clone() const;
        void    use(ICharacter& target);
};

#endif
