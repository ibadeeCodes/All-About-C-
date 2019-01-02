#include<stdio.h>
struct date
{
	int d,m,y;
};
main()
{
	struct date today;
	today.d=21;
	today.m=3;
	today.y=2018;
	printf("the date is %d/%d/%d",today.d,today.m,today.y);
}
