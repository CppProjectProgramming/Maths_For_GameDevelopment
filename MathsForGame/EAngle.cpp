#include "EAngle.h"

#include "Vector.h"
#include <math.h>

EAngle::EAngle() : Pitch(0), Yaw(0), Roll(0){}

EAngle::EAngle(float Pitch, float Yaw, float Roll) : Pitch(Pitch), Yaw(Yaw), Roll(Roll){}

Vector EAngle::ToVector() const
{
	Vector result;
	result.x = cos(Yaw) * cos(Pitch);
	result.y = sin(Pitch);
	result.z = sin(Yaw) * cos(Pitch);
	return result;
}

void EAngle::Normalize()
{
	if (Pitch > 89)
	{
		Pitch = 89;
	}
	if (Pitch < -89)
	{
		Pitch = -89;
	}

	while (Yaw < -180)
	{
		Yaw += 360;
	}

	while (Yaw > 180)
	{
		Yaw -= 360;
	}
}

