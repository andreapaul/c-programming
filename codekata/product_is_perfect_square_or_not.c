#include <stdio.h>

int main(void) {
	int n,m,prod,i,p,flag=0;
	scanf("%d %d",&n,&m);
	prod=m*n;
	for(i=1;i<=prod/2;i++)
	{
		p=i*i;
		if(p==prod)
		{
			printf("yes");
			flag=1;
			break;
		}
		
		
	}
	if(flag==0)
	printf("no");
	return 0;
}
