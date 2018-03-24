#include <stdio.h>

int main(void) {
	// your code goes here
	int n,i,remainder=0,result=0;
	scanf("%d",&n);

	while(n!=0)
	{
		remainder=n%10;
		result=result*10+remainder;
		n=n/10;
	}
	printf("%d",result);
	


	return 0;
}
