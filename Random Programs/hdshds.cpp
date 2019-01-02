#include<stdio.h>
#include<conio.h>
void cube(void);
main()
{
	cube();
}void cube(void)
{
	int a,b;
	printf("enter any number");
	scanf("%d",&a);
	b=a*a*a;
	printf("the cube id %d",b);
}
