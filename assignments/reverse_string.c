#include <stdio.h>
#include<string.h>

int main(void) {
char str[100],t,a[100];
int i,k=0,j,l,w=0;
gets(str);
l=strlen(str);
j=l-1;
while(k<j)
{
	t=str[k];
	str[k]=str[j];
	str[j]=t;
	k++;
	j--;

}


for(i=0;i<l;i++)
{
if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
{
a[w]='\0';}
else
{
	a[w]=str[i];
	w++;
}}
strcpy(str,a);
printf("%s",str);
	return 0;
}
