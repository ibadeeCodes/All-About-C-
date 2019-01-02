#include<stdio.h>
int add(int,int);
main()
{
	int x,y,sum;
	printf("enter any two numbers");
	scanf("%d %d",&x,&y);
	sum=add(x,y);
	printf("the sum is %d",sum);
}
int add(int a,int b)
{
	int c;
	c=a+b;
	return (c);
	
}
