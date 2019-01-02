#include<conio.h>
#include<stdio.h>
void add(int,int);
main()
{
	
	int x,y;
	printf("enter any two numbers");
	scanf("%d %d",&x,&y);
	add(x,y);
	getch();
}
void add(int a,int b)
{
	int c;
	c=a+b;
	printf("the sum is %d",c);
}







