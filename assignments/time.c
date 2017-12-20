#include<stdio.h>
void main()
{int hr,hour,min1=0,min2=0,time;
scanf("%d%d",&hr,&min1);
scanf("%d%d",&hour,&min2);
hr=hr*60;
hour=hour*60;
min1=hr+min1;
min2=hour+min2;
if(min1<min2)
{
time=min2-min1;
}
else
{
time=min1-min2;
}
printf("%d",time);
}
