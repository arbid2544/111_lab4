#include<stdio.h>
#include<string.h>
int main()
{
	char letters[200];
	int n=0;
	fgets(letters,sizeof letters,stdin);
	while(letters[n]!='\0')
	{
		if(letters[n]!=letters[n+1])
		printf("%c",letters[n]);
		n++;
	}
	return 0;
}
