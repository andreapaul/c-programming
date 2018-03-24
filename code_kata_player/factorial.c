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
printf("%d",f);


	return 0;
}
