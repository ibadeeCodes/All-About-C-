#include<stdio.h>
main()
{
	float f;
	int a,b,c,d,e;
	printf("enter any two numbers");
	scanf("%d %d",&a,&b);
	c=a+b;
	d=a*b;
	e=a-b;
	f=a/b;
	printf("the sum is %d\n",c);
	printf("the product is %d\n",d);
	printf("the subtraction is %d",e);
	printf("the division is %d",f);
}
