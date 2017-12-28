#include "MyUtils.hpp"

/*
 * Tutorial: use this source and its associated header file to declare
 *           and define your own helper functions.
 */

namespace aleks
{

	tyga::Matrix4x4 translate(float x, float y, float z)
	{
		return tyga::Matrix4x4(1, 0, 0, 0,
							   0, 1, 0, 0,
							   0, 0, 1, 0,
							   x, y, z, 1);
	}


	//0 speed would make the models completely stationary
	float continuous(float start_value, float speed, float time)
	{
		return start_value + speed * time;
	}

	tyga::Matrix4x4 rotateX(float rotationAngle)
	{
		return tyga::Matrix4x4( 1,			0,					 0,					  0,
								0,			cos(rotationAngle),	 sin(rotationAngle),  0,
								0,			-sin(rotationAngle), cos(rotationAngle),  0,
								0,			0,					 0,					  1);
	}


	tyga::Matrix4x4 rotateY(float rotationAngle)
	{
		return tyga::Matrix4x4( cos(rotationAngle),  0,                 -sin(rotationAngle), 0,
								0,					 1,					 0,					 0,
								sin(rotationAngle),	 0,					 cos(rotationAngle), 0,
								0,					 0,					 0,					 1);
	}


	tyga::Matrix4x4 rotateZ(float rotationAngle)
	{
		return tyga::Matrix4x4( cos(rotationAngle), sin(rotationAngle),  0,					 0,
							    -sin(rotationAngle), cos(rotationAngle), 0,					 0,
								0,					 0,					 1,					 0,
								0,					 0,					 0,				     1);
	}

}
