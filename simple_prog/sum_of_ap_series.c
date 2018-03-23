#include<stdio.h>
main()
{
	int n,sum=0,a,tn,d,i;
	scanf("%d",&n);
	scanf("%d",&a);
	scanf("%d",&d);
	sum=n*(2*a+(n-1)*d)/2;
	tn=a+(n-1)*d;
	for(i=a;i<=tn;i+=d)
	{
		if(i==tn)
		printf("%d",sum);
	}
	
	
	

}
