#include <stdio.h>
#include<string.h>
int main() 
{
int arr[10],i,n,min;
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
	if(min>arr[i])
	{
		min=arr[i];
	}
}
printf("%d",min);
return 0;
}
