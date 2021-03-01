#include<stdio.h>
#include<string.h>
int main()
{
	char letters[200];
	int n=0;
	gets(letters);
	while(letters[n]!='\0')
	{
		if(letters[n]!=letters[n+1])
		printf("%c",letters[n]);
		n++;
	}
	return 0;
}
