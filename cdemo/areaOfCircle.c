#include <stdio.h>

float circleArea(float a)
{
	float pi = 3.1415926535897932384626433832;

	float area = pi * a * a;
	return area;
}


float main()
{
	float area = 0;
	for (float radius = 3.5; radius < 13; radius++)
	{
		area = circleArea(radius);
		printf("The area of the circle with radius %f is %f\n", radius, area); 
	}
}
