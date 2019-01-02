#include<stdio.h>
void swap(int *,int *);
main()
{
	int i,j;
	printf("enter any two numbers to swapa,b");
	scanf("%d %d",&i,&j);
	swap(&i,&j);
	printf("a=%d\nb=%d",i,j);
}
void swap(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}
