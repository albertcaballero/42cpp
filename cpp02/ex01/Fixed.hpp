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
};

std::ostream &operator<<(std::ostream &out, Fixed const &fixed);

#endif