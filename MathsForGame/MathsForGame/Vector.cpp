#include "pch.h"
#include "Vector.h"
#include <math.h>

Vector::Vector() {}
Vector::Vector(float x, float y) : x(x), y(y){}


/**
* Used to get the length from point to a point
*/
float Vector::Length() const
{
	return sqrt(x * x + y * y);
}

/**
 * we use this to return the Length (magnitude) squared to see who is further in distance to another point vector
 * We used this instead of using sqrt(x * x  + y * y ) , why ? because sqrt is kinda a heavy operation on the cpu even tho it is kinda normal these days 
 * with our modern computers, but still it would matter for continous comparison.
 */
float Vector::LengthSqrt() const
{
	return x * x + y * y;
}

/*
 * Getting The Normal of a vector by Dividing the Vector over its Length, it is  Always unit length !
 * get's the direction of where the character is looking (Unit Legnth Vector) meaning its magnitued is always ONE.
 * Formula ::  UnitVec = Vec / Vec.Length"Magnitude".  
 */
Vector Vector::Normalized() const
{
	Vector normalized;
	normalized = (*this) / Length();
	return normalized;
}

Vector Vector::operator*(float s) const
{
	Vector scaled;
	scaled.x = x * s;
	scaled.y = y * s;
	return scaled;
}

Vector Vector::operator/(float s) const
{
	Vector scaled;
	scaled.x = x / s;
	scaled.y = y / s;
	return scaled;
}


/**
 * 
 */
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


