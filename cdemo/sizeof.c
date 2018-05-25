#include <stdio.h>

int main()
{
	int a = 1;
	char b = 2;
	float c = 420;
	double tau = 6.28;
	unsigned int e = 2718;
	long int pi = 314;

	printf("int a value is %d and has a size of %d bytes.\n", a, sizeof(a));
	printf("char b value is %c and has a size of %d bytes.\n", b, sizeof(b));
	printf("float c value is %f and has a size of %d bytes.\n", c, sizeof(c));
	printf("double tau value is %lf and has a size of %d bytes.\n", tau, sizeof(tau));
	printf("unsigned int e value is %ud and has a size of %d bytes.\n", e, sizeof(e));
	printf("long int pi value is %ld and has a size of %d bytes.\n", pi, sizeof(pi));
}
