#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i=0;
	int *ptr = (int*)malloc(sizeof(int)); // ptr->*ptr , ')' is missing  					             // typecastng
	*ptr=5;
	int *aptr = (int*)calloc(10, sizeof(int)); // aptr->*aptr , ')' is 							// missing typecasting missing
	
	for(i=0;i<10;i++)
		scanf("%d", (aptr+i)); // bracket missing
	
	for(i=0;i<10;i++)
		printf(" %d ", *(aptr+i)); // () missing
		
	printf("\n");	
	
	return 0;
}
