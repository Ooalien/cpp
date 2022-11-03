
#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
    public:
        Character();
        Character(const std::string &x);
        Character(const Character &x);
        ~Character();

        Character	&operator=(const Character &x);

        virtual std::string const & getName() const;
        virtual void                equip(AMateria* m);
        virtual void                unequip(int idx);
        virtual void                use(int idx, ICharacter& target);
    private:
        std::string name;
        AMateria    *inv[4];
        int         mn;
};

#endif
