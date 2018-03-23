#include<stdio.h>
int main(void)
{
	char c[100],str[100],d[100];
	int l,i,l1,j;
	scanf("%s",c);
	scanf("%s",str);
	l=strlen(c);
	//l1=strlen(str);
	
	for(i=0;c[i]!='\0';i++){
	
	d[i]=c[i];
	}
	i=l;j=0;
	while(str[j]!=0){
		d[i]=str[j];
		i++;j++;
		
	}
	
		printf("%s",d);
}
