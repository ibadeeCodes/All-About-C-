#include<stdio.h>
main()
{
	float sum,c,b,a;
	printf("enter three sides of triangle a,b,c");
	scanf("%f\n%f\n%f",&a,&b,&c);
	sum=(a+b+c);
	if(sum==180)
	{
		printf("the triangle is valid");
	}
	else
	{
		printf("the triangle is not valid");
	}
}
