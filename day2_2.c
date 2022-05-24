#include<stdio.h>

void disp(int arr[], int n, int pbit)
{
	pbit = (pbit)%n;
	int tmp=pbit;
	printf("%d " , arr[pbit]);
	pbit = (pbit+1)%n;
	while(pbit!=tmp)
	{
		printf(" %d " , arr[(pbit)]);
		pbit = (pbit+1)%n;
	}
	printf("\n");
}


int main()
{
	int arr[50],n,pbit;
	scanf("%d%d" , &n , &pbit);
	
	for(int i=0;i<n;i++)
	{
		scanf("%d" , &arr[i]);
	}
	
	disp(arr,n,pbit);
	
	
	return 0;
}
