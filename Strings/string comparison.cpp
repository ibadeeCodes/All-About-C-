#include<stdio.h>
#include<string.h>
main()
{
	char user[20]={"admin"};
	char pass[20]={"istech"};
	char s[20];
	char p[20];
	printf("enter username:\n");
	gets(s);
	printf("enter password");
	gets(p);
	if((strcmp(s,user)==0)&&(strcmp(p,pass))==0)
	{
		printf("logged inn");
	}
	else
	printf("unable to log inn");
}
