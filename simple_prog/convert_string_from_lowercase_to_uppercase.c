#include<stdio.h>
int main(void)
{
	char c[100];
	int l,i;
	scanf("%s",c);
	l=strlen(c);
	
	for(i=0;i<l;i++){
	if(c[i]>=97){
		c[i]-=32;
	}
	}	printf("%s",c);
}
