#include<stdio.h>
 int iseven(int);
int main()
{
	int c,a;
	printf("enter any number");
	scanf("%d",&a);
	iseven(a);	
}
int iseven(int x)
{
	if(x%2==0)
	printf("it is even");
	else
	printf("it is odd");
	return (x);
}

