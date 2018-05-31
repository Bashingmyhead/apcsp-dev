#include <stdio.h>
#include <string.h>

  struct Student {
    char firstName[50];
    char lastName[50];
    int age;
    int studentID;
  };

void printStudent(struct Student student)
{
  printf("Student information:\n");
  printf("First name: %s\n", student.firstName);
  printf("Last name: %s\n", student.lastName);
  printf("Age: %d\n", student.age);
  printf("ID: %d\n", student.studentID);
}

char main()
{
	struct Student studentarr[2];

	char input[256];

	printf("Welcome! Please input your information\n");

	for (int i=0; i<2; i++)
	{
	printf("Enter first name:");
	fgets(input, 256, stdin);
	sscanf(input, "%s", studentarr[i].firstName);

	printf("Enter last name:");
        fgets(input, 256, stdin);
	sscanf(input, "%s", studentarr[i].lastName);

	printf("Enter age:");
        fgets(input, 256, stdin);
        sscanf(input, "%d", &studentarr[i].age);

	printf("Enter student ID:");
        fgets(input, 256, stdin);
        sscanf(input, "%d", &studentarr[i].studentID);


	}

	for (int i = 0; i <2; i++)
	{
	printStudent(studentarr[i]);
	}

}
