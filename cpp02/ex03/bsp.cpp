#include "Point.hpp"
#include "Fixed.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point){
	float Area = a.getval(1)*(b.getval(2)-c.getval(2)) + b.getval(1)*(c.getval(2)-a.getval(2)) \
		+ c.getval(1)*(a.getval(2)-b.getval(2)) / 2.0;
	float PBC = (point.getval(1)*(b.getval(2)-c.getval(2)) + b.getval(1)*(c.getval(2)-point.getval(2)) \
		+ c.getval(1)*(point.getval(2)-b.getval(2))) / 2.0;
	float PAC = (a.getval(1)*(point.getval(2)-c.getval(2)) + point.getval(1)*(c.getval(2)-a.getval(2)) \
		+ c.getval(1)*(a.getval(2)-point.getval(2))) / 2.0;
	float PAB = (a.getval(1)*(b.getval(2)-point.getval(2)) + b.getval(1)*(point.getval(2)-a.getval(2)) \
		+ point.getval(1)*(a.getval(2)-b.getval(2))) / 2.0;
	return ((PAC +PBC + PAB) == Area);
}