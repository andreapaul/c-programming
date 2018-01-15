#include <stdio.h>
#include<string.h>
int main(void) {
	char a[100];
	int alphabet=0,number=0;
	scanf("%s",a);
	int i,m;
	m=strlen(a);
	for(i=0;i<m;i++)
	{
		if(('a'<=a[i] && a[i]<='z') || ('A'<=a[i] && a[i]<='Z'))
		{
			alphabet=1;
		}
		if('0'<=a[i] && a[i]<='9')
		{
			number=1;
		}
	}
	if(number==1 && alphabet==1)
	{
		printf("yes");
	}
	else
		printf("no");
		return 0;
}
