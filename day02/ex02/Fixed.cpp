#include "Fixed.hpp"

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
	this->fixvalue = value * pow(2, 8);
}

Fixed::Fixed( float value )
{
	std::cout << "Float constructor called" << std::endl;
	this->fixvalue = value * pow(2, 8);
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
	return ((float)(this->fixvalue / pow(2, 8)));
}

int   Fixed::toInt( void ) const
{
	return this->fixvalue / pow(2, 8);
}

std::ostream &operator<<(std::ostream &os, const Fixed &a)
{
	return os << a.toFloat();
}
