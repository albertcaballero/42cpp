#ifndef POINT_H_
#define POINT_H_

#include <iostream>
#include <iomanip>
#include "Fixed.hpp"

class Point{
private:
	const Fixed _x;
	const Fixed _y;
public:
	Point();
	~Point();
	Point(const float x, const float y);
	Point(const Fixed& x, const Fixed& y);
	Point(Point const& old);
	Point &operator=(Point const& old);
};

#endif