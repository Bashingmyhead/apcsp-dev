#include <stdio.h>

int main()

{
	int a = 0;
	int div = 5;

	while (a <= 100)
{
	if ((a%div) == 0)

	{
	printf("%d\n", a);
	}
	a++;
}

printf("done\n");

}

