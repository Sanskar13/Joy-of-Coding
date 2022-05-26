#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 500
int main()
{
	int freq[size];
	char sent[1000];
	printf("Enter sentence\n");
	scanf("%[^\n]" , sent);
	
	int n = strlen(sent);
	int mx = -1;
	for(int i=0;i<n;i++)
	{
		if(sent[i] == ' ') continue;
		freq[sent[i]]++;	
		if(freq[sent[i]] > mx)
		{
			mx = freq[sent[i]];
		}
	}
	
	printf("%d" , mx);	
	
	return 0;
}
