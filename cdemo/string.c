#include <stdio.h>
#include <string.h>

int main()
{
	char alphabet01[27];
	alphabet01[0]='a';
	char* pointer = alphabet01;
	char alphabet02 [27] = "abcdefghijklmnopqrstuvwxyz";
	char alphabet03[50];

	for (int i=0; i<27; i++)
	{
		alphabet01[i]= 97+i;
	}
		alphabet01[26]='\0';
	printf("alphabet 1 is %s\n", alphabet01);
	printf("alphabet 2 is %s\n", alphabet02);

	if (strcmp(alphabet01, alphabet02) == 0)
		printf("The strings are identical\n");
	else
		printf("You are a failure at life\n");

	for (int i=0; i<27; i++)
	{
		alphabet01[i] = 97 -32 + i;
	}
		alphabet01[26]='\0';
	printf("alphabet1 is now %s\n", alphabet01);

	if (strcmp(alphabet01, alphabet02) == 0)
		printf("They're different ;) \n");
	else
		printf("They're different congrats\n");

	strcat(alphabet03, alphabet01);
	strcat(alphabet03, alphabet02);
	printf("alphabet03 is %s\n", alphabet03);
}
