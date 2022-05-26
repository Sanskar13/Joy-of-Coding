#include<stdio.h>
#include<stdlib.h>

typedef struct stu
{
	int b_id;
	char b_name[20];
	char b_author[20];
	float b_price;
}st;

void insert(int *top, st stus[])
{
	st st1;
	printf("Enter id,name,author,price\n");
	scanf("\n%d%s%s%f\n" , &(st1.b_id) , (st1.b_name) ,(st1.b_author) , &(st1.b_price));
	
	stus[++(*top)] = st1;
}

void delete(int *top , st stus[])
{
	st st1 = stus[*top];
	printf("Deleted element is : \n");
	printf("\n%d %s %s %3.2f \n" , (st1.b_id) , (st1.b_name) , (st1.b_author) , (st1.b_price));
	(*top)--;	
}

void disp(int top , st stus[])
{
	while(top != -1)
	{
		st st1 = stus[top];
		printf("\n%d %s %s %3.2f \n" , (st1.b_id) , (st1.b_name) , (st1.b_author) , (st1.b_price));
		top--;
	}
}


int main()
{
	st stus[5];
	int n=5,ch,top=-1;

	for(;;)
	{
		printf("Enter 1:insert book \t2:remove book \t3:display 4:exit\n");
		scanf("%d" , &ch);
		switch(ch)
		{
			case 1 : if(top==4)
				 {
				 	printf("Book Stack full\n");
				 	break;
				 }
				 insert(&top,stus);
				 break;
			case 2 : if(top == -1)
				 {
				 	printf("Stack empty\n");
				 	break;
				 }
				 delete(&top,stus);
				 break;
			case 3 : if(top == -1)
				 {
				 	printf("Stack empty\n");
				 	break;
				 }
				 disp(top,stus);
				 break;
			case 4 : exit(0);
		}
	}
	return 0;
}
