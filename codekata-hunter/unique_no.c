#include <stdio.h>

int main(void) {
	// your code goes here
	int n,a[100],i,j,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
		{
		
			 if(a[i]!=a[j])
		{
		count=1;
		}
		else
		count=0;
				
		
		
	
		}

	if(count==0)
	
	{
		printf("%d",a[i]);
	}
	

}

	

	return 0;
}
