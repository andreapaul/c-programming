#include <stdio.h>

int main() 
{
	char s[50];
	int i,c=0;
	printf("enter the sentence:");
	scanf("%[^\n]s",s);
	for(i=0;s[i]!='\0';i++)
	{
		c=c+1;
	}
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==' ')
		{
			c=c-1;
		}
	}
	printf("\n%d",c);
	return 0;
}
