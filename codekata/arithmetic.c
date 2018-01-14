#include<stdio.h>
int main()
{
int n,a,b,l;
float sum;

scanf("%d%d%d",&n,&a,&b);
l=a+((n-1)*b);
sum=(n/2)*(a+l);
printf("the  value  of  sum is %d",sum);
return 0;
}
