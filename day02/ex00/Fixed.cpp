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

Fixed::Fixed(Fixed &fix)
{
    std::cout << "Copy constructor called" << std::endl;
    this->fixvalue = fix.getRawBits();
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixvalue);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixvalue = raw;
}