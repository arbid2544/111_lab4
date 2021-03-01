#include<stdio.h>
int main()
{
	char letters[50];
    int glass[4]={1,0,0,0},n,w,x,i,max=0;
    scanf("%s",letters);
	while(letters[n]!='\0')
	{
		/*switch (letters[n])
		{
		case 'A':
		    w=glass[2];
		    glass[2]=glass[1];
		    glass[1]=w;
		    break;
		case 'B':
		    w=glass[3];
		    glass[3]=glass[0];
		    glass[0]=w;
		    break;
		case 'C':
		    w=glass[0];
		    glass[0]=glass[2];
		    glass[2]=w;
		    x=glass[1];
		    glass[1]=glass[3];
		    glass[3]=x;
		    break;
		case 'D':
			w=glass[0];
		    glass[0]=glass[1];
		    glass[1]=w;
		    x=glass[2];
		    glass[2]=glass[3];
		    glass[3]=x;
		    break;
		case 'E':
			w=glass[2];
		    glass[2]=glass[1];
		    glass[1]=w;
		    x=glass[3];
		    glass[3]=glass[0];
		    glass[0]=x;
		    break;
	    }*/
	    if(letters[n]==66)
	    {
	    	w=glass[3];
		    glass[3]=glass[0];
		    glass[0]=w;
		    printf("Ok");
		}
		n++;
	}
	for(i=0;i<4;i++)
	{
		if(max<glass[i])
         max=i;
        printf("%d",glass[i]);
	}
       
    if(max==0)
       printf("\n1");
    if(max==1)
       printf("\n2");
    if(max==2)
       printf("\n3");
    if(max==3)
       printf("\n4");
	return 0;
}
