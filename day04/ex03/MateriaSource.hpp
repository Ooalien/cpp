
#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource();
        MateriaSource(const std::string &x);
        MateriaSource(const MateriaSource &x);
        ~MateriaSource();

        MateriaSource	&operator=(const MateriaSource &x);

        void            learnMateria(AMateria*);
        AMateria*       createMateria(std::string const & type);
        
    private:
        
        AMateria    *inv[4];
        int         ml;
};

#endif
