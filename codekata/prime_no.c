#include <stdio.h>
int main(void)
{
	int m,n;
	scanf("%d%d",&m,&n);
    for(int i=m;i<n;i++)
    {
        for(int j=m;j<i;j++)
        {
            if(i%j==0)
                break;
            else if(i==j+1)
                printf("%d\n",i);
        }
 
    }
    return 0;
}
