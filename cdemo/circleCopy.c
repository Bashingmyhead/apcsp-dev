#include <stdio.h>

float circleArea(float a)
{
	float pi = 3.1415926535897932384626433832;

	float area = pi * a * a;
	return area;
}


float main()
{

	char input[256];
	float radiusLow;
	float radiusHigh;

	printf("Hello. Let's calculate the area of a circle!\n");
	printf("Please enter the lower limit of the radius you want to calculate.\n");

	while (1)
	{
		fgets(input, 256, stdin);
		if (sscanf(input, "%f", &radiusLow) == 1) break;
		printf("Not a valid number - try again!\n");
	}

	printf("Please enter the upper limit you want to calculate\n");


	while (1)
	{
		fgets(input, 256, stdin);
		if (sscanf(input, "%f", &radiusHigh) == 1) break;
		printf("Not a valid number - try again!\n");
	}

	float area = 0;
	for (float radius = radiusLow; radius <= radiusHigh; radius++)
	{
		area = circleArea(radius);
		printf("The area of the circle with radius %f is %f\n", radius, area); 
	}
}
