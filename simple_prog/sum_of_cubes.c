#include<stdio.h>
main()
{
	int n,sum=0,i=0;
	scanf("%d",&n);
	while(i<=n)
	{
		sum+=i*i*i;
		i++;
	}
	printf("%d",sum);
}
