#include <stdio.h>

int main(void) {
	// your code goes here

	int a[100],i,n,j,b,count,index;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				b=a[j];
				
			index=j;
				
			}
		
		}
	}
	
	

if(index!=0)
{
	printf("%d",b);
}


	
	

	return 0;
}
