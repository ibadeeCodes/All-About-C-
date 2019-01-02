#include<stdio.h>
main()
{
	int x,i;
	printf("enter a number");
	scanf("%d",&x);
	for(i=2;i<=x-1;i++)
	{
		if(x%i==0)
		break;
	}
	if(x==i)
	printf("\n prime number");
	else{
		printf("it is not aprime");
	}
}
