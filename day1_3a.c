#include<stdio.h>

int main()
{
	int b=20; // value of b defined and b moved one line above the pointer 			  //declaration
	int *ptr=&b; // *ptr
	int **pptr=&ptr; // **ptr
	
	printf("the value of b is %d\n", b);
	printf("the value of b is%d\n", *ptr); // *[ptr -> *ptr
	printf("the value of b is%d\n", **pptr); 
	
	return 0;
}
