#include<stdio.h>
int sqr(int);
main()
{
	int a;
	printf("enter any number to print its square");
	scanf("%d",&a);
	sqr(a);
}
int sqr(int x)
{
	int y;
	y=x*x;
printf("the square is %d",y);
}

