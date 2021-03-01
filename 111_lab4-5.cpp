#include<stdio.h>
int main()
{
	char letters[50];
    int glass[4]={1,0,0,0},n,w,x,i,max=0;
    scanf("%s",letters);
    
	while(letters[n]!='\0')
	{
	    if(letters[n]==65)
	    {
	    	w=glass[2];
		    glass[2]=glass[1];
		    glass[1]=w;
		}
	    if(letters[n]==66)
	    {
	    	w=glass[3];
		    glass[3]=glass[0];
		    glass[0]=w;
		}
		if(letters[n]==67)
		{
			w=glass[0];
		    glass[0]=glass[2];
		    glass[2]=w;
		    x=glass[1];
		    glass[1]=glass[3];
		    glass[3]=x;
		}
		if(letters[n]==68)
		{
			w=glass[0];
		    glass[0]=glass[1];
		    glass[1]=w;
		    x=glass[2];
		    glass[2]=glass[3];
		    glass[3]=x;
		}
		if(letters[n]==69)
		{
			w=glass[2];
		    glass[2]=glass[1];
		    glass[1]=w;
		    x=glass[3];
		    glass[3]=glass[0];
		    glass[0]=x;
		}
		n++;
	}
	for(i=0;i<4;i++)
	{
		if(max<glass[i])
         max=i;
	}
       
    if(max==0)
       printf("1");
    if(max==1)
       printf("2");
    if(max==2)
       printf("3");
    if(max==3)
       printf("4");
	return 0;
}
