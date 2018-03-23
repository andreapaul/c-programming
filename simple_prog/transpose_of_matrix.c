#include<stdio.h>
#define pi 3.14
int main(void)
{
	int i,j,m,n;
int a[100][100],b[100][100],c[100][100],d[100][100];
scanf("%d",&n);
scanf("%d",&m);
for(i=0;i<n;i++)
{
	for(j=0;j<m;j++){
	scanf("%d",&a[i][j]);		
	}

}


for(i=0;i<n;i++)
{
	for(j=0;j<m;j++){
	printf("%d\t",a[j][i]);		
	}
printf("\n");
}



	return 0;
}
