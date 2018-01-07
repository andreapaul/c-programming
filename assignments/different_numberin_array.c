#include<stdio.h>
void findodd(int[]);
void findeven(int[]);
int main(void)
{
	int a[5]={3,7,9,13,10};
	int odd=0,even=0;
	int i;
	for(i=0;i<5;i++)
	{
		if(a[i]%2==0)
		even++;
		else
		odd++;
		if(even>1 || odd>1)
		break;
	}
	if(even>odd)
	{
		findodd(a);
	}
	else
	{
		findeven(a);
	}
	}
void findodd(int a[])
{
	int i;
	for(i=0;i<5;i++)
	{
		if(a[i]%2==0)
		break;
	}
	printf("odd no is %d",a[i]);
}
void findeven(int a[])
{
	int i;
	for(i=0;i<5;i++)
	{
		if(a[i]%2==0)
		break;
	}
	printf("even no is %d",a[i]);
}
