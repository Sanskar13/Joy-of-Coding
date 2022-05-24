#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int num,cnt=0,rem,tmp;
	scanf("%d" , &num);
	tmp=num;
	while(num)
	{
		rem = num%2;
		if(rem) cnt++;
		num /= 2;
	}
	printf("Number of ones in the number %d is %d\n" , tmp , cnt);
	return 0;
}
