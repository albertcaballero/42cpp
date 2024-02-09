#include <iomanip>
#include <iostream>

class Fixed{
	private:
		int value;
		static const int bits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed operator=(Fixed const& old);
		Fixed(Fixed const& old);
		int getRawBits(void) const;
		void setRawBits(int const raw); 

};