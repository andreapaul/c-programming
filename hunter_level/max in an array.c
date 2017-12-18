#include<stdio.h>
void main()
{
int a[100],i,n,max;
printf("Enter the no of elements in the array");
scanf("%d",&n);
printf("\n Enter the elements in the array");
for(i=1;i<n;i++)
{
scanf("%d",&a);
}
max=a[0];


if(a[i]>max)
{
max=a[i];
}
printf("\n The max element is %d",max);


}


