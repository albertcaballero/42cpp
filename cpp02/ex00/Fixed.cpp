#include "Fixed.hpp"

Fixed::Fixed()
{
	value = 0;
	std::clog << "Default constructor called\n";
}

Fixed::~Fixed()
{
	std::clog << "Destructor called\n";
}

Fixed Fixed::operator=(Fixed const& old)
{
	std::clog << "Copy assignment (=) operator called\n";
	Fixed created;
	created.value = old.value;
	return (created); 
}

Fixed::Fixed(Fixed const& old)
{
	std::clog << "Dopy constructor called\n";
	this->value = old.value;
}

int Fixed::getRawBits(void) const
{
	std::clog << "getRawBits member function called\n";
	return value;
}

void Fixed::setRawBits(int const raw)
{
	std::clog << "setRawBits member function called\n";
	value = raw;
}