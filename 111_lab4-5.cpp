#include<stdio.h>
int main()
{
	char letters[50];
    int glass[2][2]={1,0,0,0},n;
    scanf("%d",&n);
    fgets(letters,sizeof letters,stdin);
	while(letters[n]!='\0')
	{
		switch (letters[n])
		{
		case 'A':printf("A");
		case 'B':printf("B");
		case 'C':printf("C");
		case 'D':printf("D");
	    }
		n++;
	}
	return 0;
}
