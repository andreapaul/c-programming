#include<stdio.h>
void main()
{
char c;
printf("\n Enter a character:");
scanf("%c",&c);
if((c>='A'&&c<='Z')||(c>='a'&&c<='z'))
printf("\n ALPHABET");
else
printf("\n NOT A ALPHABET");
}
