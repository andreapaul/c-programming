#include <stdio.h>

int main(void) {
	// your code goes here
	char str[10];

	int i,l;

	scanf("%s",str);
	l=strlen(str);
	
	for(i=l;i>=0;i--){
		printf("%c",str[i]);}



	return 0;
}
