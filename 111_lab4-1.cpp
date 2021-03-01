#include<stdio.h>
int main()
{
	int n,i,j,max=0,max2,min=2000,min2=0,sum=0;
    scanf("%d",&n);
    int a[n][3];
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n-2;i++)
    {
        for(j=i;j<i+3;j++)
        {
            sum+=(a[j][0]*4)+(a[j][1]*2)+(a[j][2]*1);
            //printf("%d|",sum);
        }
        if(max<sum)
        {
            max=sum;
            max2=i;
          //  printf("%d|",max2);
        }
        if(min>sum)
        {
            min=sum;
            min2=i;
            //printf("%d|",min2);
        }
        sum=0;
    }
    printf("%d %d",max2+1,min2+1);
	return 0;
}
