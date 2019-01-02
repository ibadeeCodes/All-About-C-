#include<stdio.h>
#include<conio.h>
int sqr(int);
int sum(int,int);
main()
{
	int a,b;
	printf("enter any two numbers to find sqr and sum");
	scanf("%d %d",&a,&b);
	printf("sqr1=%d\nsqr2=%d\nsum=%d",sqr(a),sqr(b),sum(a,b));
	
}
sqr(int x)
{
	int y;
	y=x*x;
	return y;
}
sum(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
