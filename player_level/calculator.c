#include<stdio.h>
void main()
{
int a,b,add,sub,mul;
float div,mod;
printf("Enter the numbers:");
scanf("%d%d",&a,&b);
add=a+b;
sub=a-b;
mul=a*b;
div=a/b;
mod=a%b;
printf("\nADD=%d\nSUB=%d\nMUL=%d\nDIV=%f\nMOD=%f",add,sub,mul,div,mod);
}

