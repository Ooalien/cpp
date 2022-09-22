
#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
    public :
        Fixed(void);
        Fixed(int value);
        Fixed(float valuee);
        Fixed(Fixed &Fix);
        ~Fixed(void);
        Fixed   &operator=(Fixed const &cpy);
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );

    private :
        int                 fixvalue;
        static const int    fbits = 8;

} ;

#endif
