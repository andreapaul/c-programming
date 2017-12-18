#include<stdio.h>
int global_count=100;
void main()
{
int local_count=20;
printf("local value=%d",local_count);
func();
}
void func()
{int count=100;
printf("\n global value=%d",global_count);
printf("\n count=%d",count);
}



