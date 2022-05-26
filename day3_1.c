#include<stdio.h>

int main()
{
	int n,m;
	scanf("%d%d" , &n , &m);
	int mat[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d" , &mat[i][j]);
		}
	}
	
	printf("\n");
	
	for(int i=m-1;i>=0;i--)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d " , mat[j][i]);
		}
		printf("\n");
	}
	
	
	

	return 0;
}
