#include<stdio.h>
#include<string.h>
main()
{
	int i;
	char s[20];
	printf("enter a phrase to diplay in reverse:");
	gets(s);
    for(i=19;i>=0;i--)
    	printf("%c",s[i]);
}
