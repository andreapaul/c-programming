#include <stdio.h>
 
int main(void) {
char str[100],temp;
int l,i;
gets(str);
l=strlen(str);
for(i=0;i<l;i+=2)
{
	temp=str[i];
	str[i]=str[i+1];
	str[i+1]=temp;
}
printf("%s",str);
	return 0;
}
 
