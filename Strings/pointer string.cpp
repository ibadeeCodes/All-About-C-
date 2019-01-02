#include<stdio.h>
#include<string.h>
main()
{
	int i;
	char s[100],*p;
	p=s;
	printf("enter a phrase");
	gets(s);
	while((*p)!='\0')
	{
		printf("%c",*p);
		p++;
	}
}
