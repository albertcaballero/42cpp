#include "Fixed.hpp"

Fixed::Fixed()
{
	value = 0;
	std::clog << "default constructor called\n";
}

Fixed::~Fixed()
{
	std::clog << "Destructor called\n";
}

Fixed &Fixed::operator=(Fixed const& old)
{
	std::clog << "Copy assignment (=) operator called\n";
	this->value = old.value;
	return (*this);
}

Fixed::Fixed(Fixed const& old)
{
	std::clog << "copy constructor called\n";
	this->value = old.value;
}

Fixed::Fixed(int const num)
{
	std::clog << "INT constructor called\n";
	value = num << bits;
}

Fixed::Fixed(float const flnum)
{
	std::clog << "FLOAT constructor called\n";
	value = static_cast<int>(flnum * (1 << bits));
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

std::ostream &operator<<(std::ostream &out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return out;
}

float Fixed::toFloat(void) const
{
	float flnum = static_cast<float>(value) / (1 << bits);
	return flnum;
}

int	Fixed::toInt(void) const
{
	return value >> bits;
}

int Fixed::operator>(Fixed const& old)
{
	return this->value > old.value;
}

int Fixed::operator>=(Fixed const& old)
{
	return this->value >= old.value;
}

int Fixed::operator<(Fixed const& old)
{
	return this->value < old.value;
}

int Fixed::operator<=(Fixed const& old)
{
	return this->value <= old.value;
}

int Fixed::operator==(Fixed const& old)
{
	return this->value == old.value;
}

int Fixed::operator!=(Fixed const& old)
{
	return this->value != old.value;
}

/*
		Fixed &operator+(Fixed const& old);
		Fixed &operator-(Fixed const& old);
		Fixed &operator*(Fixed const& old);
		Fixed &operator/(Fixed const& old);
		//increment
		Fixed &operator++(void);
		Fixed &operator--(void);
		Fixed operator++(int num);
		Fixed operator--(int num);
		//comparators
		Fixed &min(Fixed&, Fixed&);
		Fixed &min(Fixed const&, Fixed const&);
		Fixed &max(Fixed&, Fixed&);
		Fixed &max(Fixed const&, Fixed const&);
*/