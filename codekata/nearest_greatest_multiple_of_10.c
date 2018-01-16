#include <stdio.h>

int main(void) 
{
	int n;

	scanf("%d",&n);
	n+=1;
	while(n%10!=0)
	{
		n=n+1;
	}
	printf("\n%d",n);
	return 0;
}
