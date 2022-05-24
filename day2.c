#include<stdio.h>

int largest(int arr[] , int n)
{
	int mx1=-10000000;
	for(int i=0;i<n;i++)
	{
		if(arr[i] > mx1)
		{
			mx1 = arr[i];
		}
	}
	return mx1;
}

int second_largest(int arr[] , int n, int mx1)
{
	int mx2=-10000000,cnt=1;
	for(int i=0;i<n;i++)
	{
		if(arr[i] > mx2)
		{
			if(arr[i] == mx1 && cnt==0)
			{
				mx2 = arr[i];
				break;
			}
			else if(arr[i] == mx1)
			{
				cnt--;
			}
			else
			{
				mx2 = arr[i];
			}
		}
	}
	return mx2;
}

int main()
{
	int arr[50],n;
	scanf("%d" , &n);
	
	for(int i=0;i<n;i++)
	{
		scanf("%d" , &arr[i]);
	}
	
	int larger = largest(arr,n);
	int second_larger =  second_largest(arr,n,larger);
	
	
	printf("\nLargest number is : %d\n Second largest number is :  %d\n" , larger , second_larger);
	
	
	return 0;
}
