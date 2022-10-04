#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
    public :
        std::string ideas[100];
        Brain( void );
        Brain(const Brain &other);
        ~Brain( void );
        Brain   &operator=(const Brain &other);
} ;

#endif
