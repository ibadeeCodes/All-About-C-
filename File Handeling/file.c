#include<stdio.h>
#include<string.h>
main()
{
    int i;
	FILE *fp;
	char s[100];
	fp=fopen("f1.txt","w");
	if (fp==NULL)
	{
		printf("file can not be opened");
		exit(1);
	}
	printf("enter a string");
	gets(s);
	for(i=0;i<strlen(s);i++)
	
		fputc(s[i],fp);
	
	getch();
	puts(s);
	fclose(fp);
	getch();
}

