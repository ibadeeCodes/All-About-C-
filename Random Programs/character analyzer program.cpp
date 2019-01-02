#include<stdio.h>
int charf(char);
main()
{
	char cha;
	printf("enter any key");
	scanf("%c",&cha);
	charf(cha);
	
	
}
int charf(char)

{
	char key;
	if((key>=0&&key<=47)||(key>=58&&key<=64)||(key>=94||key<=96))
	{
	   return 	printf("it is a character");
	}
	else if(key>=48&&key<=57)
	{
	return	printf("it is a number");
	}
	else if(key>=65&&key<=90)
	{
	return	printf("it is a capital letter");
	}
	else if(key>=97&&key<=122)
	{
	return	printf("it is small letter");
	}
	else
	{
	return	printf("not defined");
	}
}

