/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:05:32 by abayar            #+#    #+#             */
/*   Updated: 2022/10/11 12:05:33 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <math.h>

class Fixed
{
    public :
        Fixed( void );
        Fixed( int value );
        Fixed( float valuee );
        Fixed( const Fixed &Fix );
        ~Fixed( void );
        Fixed   &operator=( Fixed const &cpy );
        Fixed   operator+( Fixed const &cpy ) const;
        Fixed   operator-( Fixed const &cpy ) const;
        Fixed   operator*( Fixed const &cpy ) const;
        Fixed   operator/( Fixed const &cpy ) const;
        bool    operator==( Fixed const &cpy ) const ;
        bool    operator!=( Fixed const &cpy ) const ;
        bool    operator>( Fixed const &cpy ) const ;
        bool    operator<( Fixed const &cpy ) const ;
        bool    operator<=( Fixed const &cpy ) const ;
        bool    operator>=( Fixed const &cpy ) const ;
        Fixed   &operator++( void );
        Fixed	operator++(int);
        Fixed   &operator--( void );
        Fixed	operator--(int);
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        float   toFloat( void ) const;
        int     toInt( void ) const;
        static Fixed &min(Fixed &a, Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &min(Fixed const &a, Fixed const &b);
        static const Fixed &max(Fixed const &a, Fixed const &b);

    private :
        int                 fixvalue;
        static const int    fbits = 8;

} ;

std::ostream    &operator<<(std::ostream &os, const Fixed &a);
int             power( void );

#endif
