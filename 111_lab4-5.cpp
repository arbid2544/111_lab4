#include<stdio.h>
int main()
{
	char letters[50];
    int glass[4]={1,0,0,0},n=0,w,i,x,z,m;
    scanf("%d",&m);
    int max[m]={0};
    for(z=0;z<m;z++){
    scanf("%s",letters);
	while(letters[n]!='\0')
	{
	    if(letters[n]==65)
	    {
	    	w=glass[2];
		    glass[2]=glass[1];
		    glass[1]=w;
		  //  printf("%d %d %d %d|",glass[0],glass[1],glass[2],glass[3]);
		}
	    if(letters[n]==66)
	    {
	    	w=glass[3];
		    glass[3]=glass[0];
		    glass[0]=w;
		  //  printf("%d %d %d %d|",glass[0],glass[1],glass[2],glass[3]);
		}
		if(letters[n]==67)
		{
			w=glass[0];
		    glass[0]=glass[2];
		    glass[2]=w;
		    x=glass[1];
		    glass[1]=glass[3];
		    glass[3]=x;
		   // printf("%d %d %d %d|",glass[0],glass[1],glass[2],glass[3]);
		}
		if(letters[n]==68)
		{
			w=glass[0];
		    glass[0]=glass[1];
		    glass[1]=w;
		    x=glass[2];
		    glass[2]=glass[3];
		    glass[3]=x;
		    //printf("%d %d %d %d|",glass[0],glass[1],glass[2],glass[3]);
		}
		if(letters[n]==69)
		{
			w=glass[2];
		    glass[2]=glass[1];
		    glass[1]=w;
		    x=glass[3];
		    glass[3]=glass[0];
		    glass[0]=x;
		    //printf("%d %d %d %d|",glass[0],glass[1],glass[2],glass[3]);
		}
	//	printf("%d",glass[n]);
		n++;
	}
	n=0;
	for(i=0;i<4;i++)
	{
		if(max[z]<glass[i])
         max[z]=i;
        //printf("%d",max[z]);
	}
}

    for(z=0;z<m;z++)
	{
    if(max[z]==0)
       printf("1\n");
    if(max[z]==1)
       printf("2\n");
    if(max[z]==2)
       printf("3\n");
    if(max[z]==3)
       printf("4\n");
   }
   //printf("%d %d %d %d",glass[0],glass[1],glass[2],glass[3]);
	return 0;
}
