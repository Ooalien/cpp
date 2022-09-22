/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 09:56:32 by abayar            #+#    #+#             */
/*   Updated: 2022/09/22 09:56:33 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
    public :
        Fixed(void);
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
