/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:05:22 by abayar            #+#    #+#             */
/*   Updated: 2022/10/11 20:46:02 by abayar           ###   ########.fr       */
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
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        float   toFloat( void ) const;
        int     toInt( void ) const;

    private :
        int                 fixvalue;
        static const int    fbits = 8;

} ;

std::ostream &operator<<(std::ostream &os, const Fixed &a);
int	power( void );

#endif
