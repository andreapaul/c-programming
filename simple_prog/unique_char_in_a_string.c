#include <stdio.h>

int main(void) {
	int i,j,count=0,l;
	char str[10];

	scanf("%s",str);
	l=strlen(str);

	for(i=0;i<=l;i++)
	{
		for(j=i+1;j<=l;j++)
		{
			if(str[i]==str[j])
			{
				
				count++;
					break;
			
			}
		
		}
	}
	if(count==0)
	{
		printf("unique");
	}
	else
	{
		printf(" not unique");	
	}

	return 0;
}
