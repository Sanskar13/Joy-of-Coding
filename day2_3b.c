#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct details
{
	int age;
	float sal;
	char name[];	
};

int main ()
{

	struct details sd;
	sd.age = 12;
	strcpy(sd.name , "Napeir");
	sd.sal = 34.5;
	
	return 0;
}
