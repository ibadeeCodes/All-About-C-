#include<stdio.h>
#include<string.h>
main()
{
	char s[20]={"ibadee"};
	char target[20];
	printf("copying string s intom target\n");
	puts(s);
	strcpy(target,s);
	puts(target);
	puts(s);
}
