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
	this->fixvalue = value * power();
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
	return ((float)(this->fixvalue / power()));
}

int   Fixed::toInt( void ) const
{
	return this->fixvalue / power();
}

std::ostream &operator<<(std::ostream &os, const Fixed &a)
{
	os << a.toFloat();
	return os;
}

Fixed	Fixed::operator*(Fixed const &a) const
{
	Fixed p(toFloat() * a.toFloat());
	return (p);
}

Fixed	Fixed::operator+(Fixed const &a) const
{
	Fixed	cpy(toFloat() + a.toFloat());
	return (cpy);
}

Fixed	Fixed::operator-(Fixed const &a) const
{
	Fixed	cpy(toFloat() - a.toFloat());
	return (cpy);
}

Fixed	Fixed::operator/(Fixed const &a) const
{
	Fixed p(toFloat() / a.toFloat());
	return (p);
}

Fixed	&Fixed::operator++()
{
	this->fixvalue++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed cpy(*this);
	this->fixvalue++;
	return (cpy);
}

Fixed	&Fixed::operator--()
{
	this->fixvalue--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed cpy(*this);
	this->fixvalue--;
	return (cpy);
}

bool    Fixed::operator==( Fixed const &cpy) const
{
	return (this->getRawBits() == cpy.getRawBits());
}

bool    Fixed::operator!=( Fixed const &cpy ) const
{
	return (!(*this == cpy));
}

bool    Fixed::operator>( Fixed const &cpy ) const
{
	return (this->getRawBits() > cpy.getRawBits());
}

bool    Fixed::operator<( Fixed const &cpy ) const
{
	return (this->getRawBits() < cpy.getRawBits());
}

bool    Fixed::operator<=( Fixed const &cpy ) const
{
	return (!(*this > cpy));
}

bool    Fixed::operator>=( Fixed const &cpy ) const
{
	return (!(*this < cpy));
}

Fixed	Fixed::min(Fixed &a, Fixed &b)
{
	if (a > b)
		return b;
	return a;
}

Fixed	Fixed::max(Fixed &a, Fixed &b)
{
	if (a < b)
		return b;
	return a;
}

const Fixed	Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return b;
	return a;
}

const Fixed Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return b;
	return a;
}
