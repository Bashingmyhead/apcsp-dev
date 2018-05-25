#include <stdio.h>

float circleArea(float a)
{
	float pi = 3.1415926535897932384626433832;

	float area = pi * a * a;
	return area;
}


int main()
{
	float area = 0;

	area = circleArea(2);
	printf("The area of the circle with radius 2 is %f\n", area); 
}
