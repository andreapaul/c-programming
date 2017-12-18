#include<stdio.h>
void main()
{
int sum=0,a,i,n=4;
printf("Enter the value of a");
scanf("%d",&a);
for(i=1;i<=n;i++)
{

sum=sum+a;
a=(a*10)+9;
}
printf("%d",sum);
}
