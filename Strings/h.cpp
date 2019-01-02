#include<stdio.h>
#include<string.h>
main()
{
	int l;
	char s[2];
	char *p;
	p=&s[2];
	gets(s);
	puts(s);
	l=strlen(s);
	printf("%s",*p);
	printf("%d\n",l);
}
