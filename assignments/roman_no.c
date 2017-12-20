#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
int a[20],l,i=0,j,decimal; 
char roman_no[2]; 
printf("Enter the Roman Numeral: "); 
scanf("%s",roman_no); 
l=strlen(roman_no); 
for(i=0;i<l;i++)
{ 
if(roman_no[i]=='I')  
a[i]=1; 
else if(roman_no[i]=='V') 
a[i]=5; 
else if(roman_no[i]=='X') 
a[i]=10; 
else if(roman_no[i]=='L')  
a[i]=50;  
else if(roman_no[i]=='C') 
a[i]=100; 
else if(roman_no[i]=='D')  
a[i]=500;
else if(roman_no[i]=='M')  
a[i]=1000;  
else  {exit(0); 
}
}
decimal=a[l-1];
for(i=l-1;i>0;i--)
{ 
if(a[i]>a[i-1]) 
decimal=decimal-a[i-1]; 
else if(a[i]<a[i-1])  
decimal=decimal+a[i-1];
}
printf("\n Decimal Number is %d ",decimal);
return 0;
}
