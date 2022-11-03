
#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): ml(0)
{
    for (int u=0;u<4;u++)
        this->inv[u] = NULL;
    // std::cout << "Default Constractor Called." << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &x)
{
    *this = x;
    // std::cout << "Copy Constractor Called." << std::endl;
}

MateriaSource::~MateriaSource()
{
    for(int i = 0; i < 4; i++)
    {
        if (this->inv[i])
            delete this->inv[i]; 
    }
    // std::cout << "Destroctor Called" << std::endl;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &x)
{
    for(int i = 0;i < 4; i++)
    {
        if (this->inv[i])
            delete this->inv[i];
        if (x.inv[i])
            this->inv[i] = x.inv[i]->clone();
        else
            this->inv[i] = NULL;
    }
    return *this;
}

void            MateriaSource::learnMateria(AMateria *x)
{
    if (this->ml >= 4)
		std::cout << "Can't learn any more materias" << std::endl;
	else
	{
		this->inv[this->ml] = x;
		this->ml++;
		std::cout << x->getType() << " Materia Learned." << std::endl;
	}
}

AMateria*       MateriaSource::createMateria(std::string const & type)
{
    for(int i = 0; (i < 4 && this->inv[i]); i++)
    {
        if (this->inv[i]->getType() == type)
            return this->inv[i]->clone();
    }
    return NULL;
}
