#include<stdio.h>
void main()
{
int n,sum=0,i;
printf("\n Enter a number");
scanf("%d",&n);

for(i=1;i<=n;++i)
{
sum=sum+i;
}

printf("Sum is %d",sum);

}
