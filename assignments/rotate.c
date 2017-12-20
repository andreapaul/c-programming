#include<stdio.h>
void main()
{
int d,n,i,j,a[100];
int t;
printf("\n Enter the no of time to rotate");
scanf("%d",&d);
printf("\n Enter the size of the array");
scanf("%d",&n);
printf("\n Enter the array elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

for(j=0;j<d;j++)
{
t=a[0];
for(i=0;i<n-1;i++)

{

a[i]=a[i+1];
a[i+1]=t;
}
}



printf("\n The array is:");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
