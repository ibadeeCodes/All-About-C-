//takes nothing returns nothing//
#include<conio.h>
#include<stdio.h>
void add(void);
main()
{
	add();
	getch();
}
void add()
{
	int a,b,c;
	printf("enter any number");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("the sum is %d",c);
}




