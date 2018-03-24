#include <stdio.h>

int main(void) {
	// your code goes here
	int n,i,f=1;
	scanf("%d",&n);
	while(i<n)
	{
		f+=f*i;
		i++;
	}
	if(n==1||n==0)
	{
		f=1;
	}
printf("%d",f);


	return 0;
}
