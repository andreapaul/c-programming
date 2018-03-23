#include <stdio.h>

int main(void) {
	// your code goes here
	int a[100],max,min,n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	min=a[0];
	
		for(i=0;i<n;i++)
		{
			if(a[i]<min)
			{
				min=a[i];
			}
		}
	printf("%d\n%d",max,min);
	return 0;
}
