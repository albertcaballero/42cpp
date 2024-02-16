#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed d(2);
	Fixed const b( Fixed( 5.05f ) * d );
	Fixed c(6.6f);
	std::cout << "a=   " << a << std::endl;
	std::cout << "++a= " << ++a << std::endl;
	std::cout << "a=   " << a << std::endl;
	std::cout << "a++= " << a++ << std::endl;
	std::cout << "a=   " << a << std::endl;
	std::cout << "b=   " << b << std::endl;
	std::cout << "c=   " << c << std::endl;
	std::cout << "max (a, b) = " << Fixed::max( a, b ) << std::endl;
	std::cout << "c/d->" << c << "/" << d << "= " << c/d << std::endl;
	std::cout << "c*d->" << c << "*" << d << "= " << c*d << std::endl;
	std::cout << "min (a, b/c) = " << Fixed::min( a, c ) << std::endl;
	a = Fixed(1.11f);
	std::cout << "a(1.11) = " << a <<std::endl;
	std::cout << "a<c  ="<< (a < c) << std::endl;
	std::cout << "a==c ="<< (a == c) << std::endl;
	std::cout << "c>b  ="<< (c>b) << std::endl;
	return 0;
}