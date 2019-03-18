#include "pch.h"
#include "Vector.h"


Vector::Vector() {}
Vector::Vector(float x, float y) : x(x), y(y){}



Point Point::AddVector(Vector v)
{
	Point p2;
	p2.x = x + v.x;
	p2.y = y + v.y;
	return p2;
}

Vector operator-(Point a, Point b)
{
	Vector v;

	v.x = a.x - b.x;
	v.y = a.y - b.y;

	return v;
}
