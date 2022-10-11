/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:05:19 by abayar            #+#    #+#             */
/*   Updated: 2022/10/11 20:54:14 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	power( void )
{
	int i = 2;
	for (int j = 1;j < 8; j++)
		i*=2;
	return i;
}

Fixed &Fixed::operator=(Fixed const &cpy)
{
	std::cout << "Copy assignation operator called" << std::endl;
	this->fixvalue = cpy.getRawBits();
	return (*this);
}

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->fixvalue = 0;
}

Fixed::Fixed(const Fixed &fix)
{
    std::cout << "Copy constructor called" << std::endl;
    this->fixvalue = fix.getRawBits();
}

Fixed::Fixed( int value )
{
	std::cout << "Int constructor called" << std::endl;
	this->fixvalue = value * power();
}

Fixed::Fixed( float value )
{
	std::cout << "Float constructor called" << std::endl;
	this->fixvalue = roundf(value * power());
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return (this->fixvalue);
}

void Fixed::setRawBits(int const raw)
{
	this->fixvalue = raw;
}

float   Fixed::toFloat( void ) const
{
	return ((float)this->fixvalue / power());
}

int   Fixed::toInt( void ) const
{
	return this->fixvalue / power();
}

std::ostream &operator<<(std::ostream &os, const Fixed &a)
{
	return os << a.toFloat();
}
