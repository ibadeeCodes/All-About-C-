#include<stdio.h>
main()
{
	a();
	b();
	a();
}
a()
{
	printf("\nHELLO");
}
b()
{
	a();
}
