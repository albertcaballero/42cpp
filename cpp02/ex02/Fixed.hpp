#ifndef FIXED_H_
#define FIXED_H_

#include <iomanip>
#include <iostream>

class Fixed{
	private:
		int value;
		static const int bits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed &operator=(Fixed const& old);
		Fixed(Fixed const& old);
		Fixed(int const num);
		Fixed(float const flnum);
		float toFloat(void) const;
		int toInt(void) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);
		//comparison operators
		int operator>(Fixed const& old);
		int operator>=(Fixed const& old);
		int operator<(Fixed const& old);
		int operator<=(Fixed const& old);
		int operator==(Fixed const& old);
		int operator!=(Fixed const& old);
		//arithmetic
		Fixed operator+(Fixed const& old);
		Fixed operator-(Fixed const& old);
		Fixed operator*(Fixed const& old);
		Fixed operator/(Fixed const& old);
		//increment
		Fixed &operator++(void);
		Fixed &operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);
		//comparators
		static Fixed &min(Fixed&, Fixed&);
		static const Fixed &min(Fixed const&, Fixed const&);
		static Fixed &max(Fixed&, Fixed&);
		static const Fixed &max(Fixed const&, Fixed const&);

};

std::ostream &operator<<(std::ostream &out, Fixed const &fixed);

#endif