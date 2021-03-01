#include<stdio.h>
int main()
{
	int n,i,j;
    scanf("%d",&n);
    int a[n][3];
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int sum=0;
    for(i=0;i<n-2;i++)
    {
        for(j=i;j<i+3;j++)
        {
            sum+=(a[j][0]*4)+(a[j][1]*2)+(a[j][2]*1);
        }
    }
	return 0;
}
