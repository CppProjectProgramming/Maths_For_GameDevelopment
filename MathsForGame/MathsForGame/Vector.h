#pragma once

struct Point
{
	float x, y;
	Point AddVector(class Vector v); // Forward Declaring Vector
	Point() {}
	Point(float x, float y) : x(x), y(y){}
};

class Vector
{
public:
	Vector();
	Vector(float x, float y);
	float Length() const;
public:

	float x, y;
};

Vector operator-(Point a, Point b);
