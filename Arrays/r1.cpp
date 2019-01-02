//arrays ,pointers and functions....a
#include<stdio.h>
void show(int **);
void display(int *);
main()
{
	int i;
	int marks[]={2,3,4,5,6,7,8};
	for(i=0;i<=6;i++)
	{
		display(&marks[i]);
	}
	
}
void display(int *n)
{
	show(&n);
}
void show(int **n)
{
	printf("%u\n",&n);
}
