#include<stdio.h>
#define pi 3.14
int main(void)
{
	int i,j,m,n;
int a[100][100];
float det=0.0;
scanf("%d",&n);
scanf("%d",&m);
for(i=0;i<n;i++)
{
	for(j=0;j<m;j++){
	scanf("%d",&a[i][j]);		
	}

}
for(i=0;i<n;i++){
det=det+(a[0][i]*(a[1][(i+1)%3]*a[2][(i+2)%3]-a[1][(i+2)%3]*a[2][(i+1)%3]));}
for(i=0;i<n;i++)
{
	for(j=0;j<m;j++){
printf("%.2f\t",((a[(i+1)%3][(j+1)%3]*a[(i+2)%3][(j+2)%3])-(a[(i+1)%3][(j+2)%3]*a[(i+2)%3][(j+1)%3]))/det);

	}
	printf("\n");

}



	return 0;
}
