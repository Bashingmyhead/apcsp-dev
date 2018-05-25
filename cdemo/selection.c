#include <stdio.h>

int main()
{
  int a = 0;

  // if statement to test is a is equal to 0
  if (a == 0)
  {
    printf("a is 0\n");
  }
  else
  {
    printf("a is not 0\n");
  }


	a = 1;
	//demonstrate not equal
	if (a != 0)
	{printf("a is not 0\n");}
	else
	{printf("a is 0\n");}


	int b = 2;
	//demonstrate is greater than
	if (a > b)
	{printf("a is greater than b\n");}
	else
	{printf("a is not greater than b\n");}


	b = 0;
	//demonstrate is greater than or equal to
	if (a >=  b)
	{printf("a is greater than or equal to b\n");}
	else
	{printf("a is not greater than or equal to b\n");}


	//demonstrate AND (both equal to 0)
	if (a == 0 && b == 0)
	{printf("both a and b are equal to 0\n");}
	else
	{printf("a and b are not both equal to 0\n");}


	//demonstrate OR (either equal to 0)
	if (a == 0 || b == 0)
	{printf("either a or b is equal to 0\n");}
	else
	{printf("neither a or b is equal to 0\n");}


	//demonstrate not equal to 0
	if (!(a == 0))
	{printf("a is not equal to 0\n");}
	else
	{printf("a is equal to 0\n");}
}
