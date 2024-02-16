#include <iostream>
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void ) {
	Point p(1.0f, 24.0f);
	Point p2(10.1f, 9.2f);

//triangle
	Point a(12.0f, 1.0f);
	Point b(0.2f, 2.3f);
	Point c(0.0f, 1.0f);
	if (bsp(a, b, c, p))
		std::cout << "true :)" << std::endl;
	else
		std::cout << "false :(" << std::endl;
	return 0;
}