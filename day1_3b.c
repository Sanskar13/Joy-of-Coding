#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a =20;
	float b=20.2; // Semicolon missing
	int *ptr =&a; // pointer data type --> can't dereference void *
	
	printf("the value of a is %d\n", *ptr);
	 float *ptrr = &b; // integer data type cannot dereference float
	printf("the value of b is %2.1f\n", *ptrr); // %d -> %f
	
	return 0;
}
