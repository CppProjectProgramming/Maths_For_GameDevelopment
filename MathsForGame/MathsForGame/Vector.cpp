#include "pch.h"
#include "Vector.h"


Vector::Vector(float x, float y) : x(x), y(y){}



Point Point::AddVector(Vector v)
{
	Point p2;
	p2.x = x + v.x;
	p2.y = y + v.y;
	return p2;
}
