#pragma once

class Vector;

class EAngle
{
public:
	EAngle();
	EAngle(float Pitch, float Yaw, float Roll);

	Vector ToVector() const;
	
	void Normalize();

public:
	float Pitch;
	float Yaw;
	float Roll;
};

