
#include "Character.hpp"

Character::Character(): name(""), mn(0)
{
    for (int u=0;u<4;u++)
        this->inv[u] = NULL;
    // std::cout << "Default Constractor Called." << std::endl;
}

Character::Character(const std::string &x)
{
    *this = Character();
    this->name = x;
    // std::cout << "Name Constractor Called." << std::endl;
}

Character::Character(const Character &x)
{
    *this = x;
    // std::cout << "Copy Constractor Called." << std::endl;
}

Character::~Character()
{
    for(int i = 0; i < this->mn; i++)
        delete this->inv[i]; 
    // std::cout << "Destroctor Called" << std::endl;
}

Character	&Character::operator=(const Character &x)
{
    for(int i = 0;i < 4; i++)
    {
        if (this->inv[i])
            delete this->inv[i];
        this->inv[i] = x.inv[i];
        if (this->inv[i])
            this->mn++;
    }
    this->name = x.getName();
    // std::cout << "Copy Assignement operartor called." << std::endl;
    return *this;
}

std::string const & Character::getName() const
{
    return this->name;
}

void                Character::equip(AMateria* m)
{
    if (m)
    {
        if (this->mn < 4)
        {
            this->inv[this->mn] = m;
            this->mn++;
            std::cout << m->getType() << " Materia is equiped.\n"; 
        }
        else
            std::cout << m->getType() << " Materia Cannot be equiped.\n";
    }
}

void                Character::unequip(int idx)
{
    int i = idx;

    if (idx >= 0 && idx <= 3)
    {
        i++;
        for(; ((i < 4) && this->inv[i]);i++)
            this->inv[i - 1] = this->inv[i];
        this->inv[i] = NULL;
    }
}

void                Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx <= 3 && this->inv[idx])
        this->inv[idx]->use(target);
}
