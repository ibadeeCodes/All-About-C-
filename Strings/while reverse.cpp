#include<stdio.h>
#include<string.h>
main()
{
	int i=20;
	char s[20];
	printf("enter a phrase");
	gets(s);
	while(s[i]!=s[0])
	{
		printf("%c",s[i]);
		i--;
	}

}
