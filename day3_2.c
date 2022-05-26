#include<stdio.h>

int main()
{
	int n,sum;
	scanf("%d%d" , &n , &sum);
	
	int arr[n+1];
	for(int i=0;i<n;i++)
	{
		scanf("%d" , &arr[i]);
	}
	
	int start=0,end=n-1,csum=0;
	for(int i=0;i<n;i++)
	{
		if(csum + arr[i] < sum)
		{
			csum += arr[i];
		}
		else if(csum + arr[i] == sum)
		{	
			end = i+1;
			break;
		}
		else
		{
			
			while(csum + arr[i] > sum)
			{
				csum -= arr[start++];
				
			}
			csum += arr[i];
		}
	}
	
	printf("The Subarray is :\n");
	int checksum=0,j=0,summ=0,flag=0;
	if(start!=0) start-=1;
	for(int i=start;i<end;i++)
	{
		summ += arr[i];
		checksum += arr[i];
		if(checksum == sum)
		{
			flag=1;
			break;
		}
	}
	if(!flag)
	{
		printf("Not possible to obtain the sum\n");
	}
	else
	{
	checksum=0,end=n-1;
	for(j=start;j<=end;j++)
	{
		printf("%d " , arr[j]);	
		checksum += arr[j];
		if(checksum == sum)
		{
			end = j;
			break;
		}
	} 
	printf("\nIndices ranges from %d to %d\n" , start , end);
	}
	
	
	return 0;
}
