#pragma once

#include <iostream>
class Vector;
struct Point
{
	float x, y;
	Point AddVector(Vector v); // Forward Declaring Vector
	Point() {}
	Point(float x, float y) : x(x), y(y){}
};

class Vector
{
public:
	Vector();
	Vector(float x, float y);
	float Length() const;
	float LengthSqrt() const;
	Vector Normalized() const;

	Vector operator*(float x) const;
	Vector operator/(float x) const;
	Vector operator+(const Vector& other) const;
	Vector operator-(const Vector& other) const;



public:

	float x, y;
};

Vector operator-(Point a, Point b);




