#include <stdio.h>
int main() 
{
int time,minutes,hour;
scanf("%d",&time);
minutes=time%60;
if(minutes==0)
{
hour=time/60;
}
else
{
hour=(time-minutes)/60;
}
printf("%d %d\n",hour,minutes);
return 0;
}
