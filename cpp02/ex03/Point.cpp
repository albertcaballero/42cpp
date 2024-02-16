#include "Point.hpp"

Point::Point(): _x(0), _y(0){
}

Point::~Point(){}

Point::Point(float const x, float const y): _x(x), _y(y){
}

Point::Point(const Fixed& x, const Fixed& y): _x(x), _y(y){
}

Point &Point::operator=(Point const& old)
{
	Point a(old._x, old._y);
	return a;
}

Point::Point(Point const& old): _x(old._x), _y(old._y)
{
}