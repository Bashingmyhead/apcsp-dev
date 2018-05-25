#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

  float d = 3.14;
  float e = 2.71;

  float* ptrtod;
  ptrtod = &d;
  float* ptrtoe;
  ptrtoe = &e;

	printf("the value of d is %f and the address of d is %d\n", d, ptrtod);
	printf("the value of e is %f and the address of e is %d\n", e, ptrtoe);


	float temp = d;
	*ptrtod = e;
	*ptrtoe = temp;

	printf ("the value of d is now %f and the value of e is now %f\n", d, e);
}
