#include<stdio.h>
#define PI 3.142
#define area(n) printf("the area of sphere is %f",(4*PI*n*n));
main()
{
	int r;
	printf("enter the value of radius(r):");
	scanf("%d",&r);
	area(r);
	printf("\ngo back to life now");
	
}
