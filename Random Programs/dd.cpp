#include<stdio.h>
void input(int);
main()
{
	int i,a[10];
	input(a[]);
	for(i=1;i<=9;i++)
	{
		printf("%d",a[i]);
	}
	
}
void input(int b[])
{
	int i;
	for(i=0;i<=9;i++)
	{
		scanf("%d",&b[i]);
	}
}
