#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char word[100];
	scanf("%[^\n]" , word);
	
	char vowel[]={'a','e','i','o','u'};
	for(int i=0;i<strlen(word);i++)
	{
		int flag=0;
		for(int j=0;j<strlen(vowel);j++)
		{
			if(word[i] == vowel[j])
			{
				flag=1;
				break;
			}
		}	
		if(!flag){
			printf("%c" , word[i]);
		}else{
			printf(" ");
		}
	}
	printf("\n");
	return 0;
}
