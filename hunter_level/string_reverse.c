#include<stdio.h>
void main()
{
   
    	char *p;
        int length,i;
        printf("Enter the string:");
        scanf("%s",p);
        length=strlen(p);
        for(i=length;i>=0;i--)
        {
        printf("%c",*(p+i));

}}
