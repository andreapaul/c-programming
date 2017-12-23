#include<stdio.h>
int main(void)
{
int s1=0,s=0,i;
int a[5]={1,2,2,1,3};
for(i=0;i<5;i+=5)
{
s=a[i];
if(i==4)
s1=1;
}
if(s1==1)
printf("TRUE");
else
printf("FALSE");
}
