#include <iostream>
#include "Fixed.hpp"

int main( void ) {
Fixed a;
Fixed b( a );
Fixed c;
c = b;
int	n1 = 5;
int	n2 = 100;
int	n3 = -20;
std::cout << "\n============ TEST A ============" << std::endl;
std::cout << a.getRawBits() << std::endl;
std::cout << "A set bits to: " << n1 << std::endl;
	a.setRawBits(n1);
std::cout << a.getRawBits() << std::endl;
std::cout << "============ TEST B ============" << std::endl;
std::cout << b.getRawBits() << std::endl;
std::cout << "B set bits to: " << n2 << std::endl;
	b.setRawBits(n2);
std::cout << b.getRawBits() << std::endl;
std::cout << "============ TEST C ============" << std::endl;
std::cout << c.getRawBits() << std::endl;
std::cout << "C set bits to: " << n3 << std::endl;
	c.setRawBits(n3);
std::cout << c.getRawBits() << std::endl;
std::cout << std::endl;
return 0;
}