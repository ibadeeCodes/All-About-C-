//take something returns something
#include<stdio.h>
#include<conio.h>
int cbe(int);
int main()
{
	int sum,cbe,a;
	printf("enter a number to find its cube");
	scanf("%d",a);
	sum=cube(int a);
	printf("the cube is %d",sum);
	}
int cbe(int x)
{
	int y;
	y=x*x*x;
	return(y);
}
