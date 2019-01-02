#include<stdio.h>
main()
{
	int i,j,fact=1,factorial=0;
	do
	{
		printf("enter the value");
		scanf("%d",&i);
	}
	while(i!=0);
	{
		for(j=i;j>=1;j--)
		fact=fact*i;
		printf("factorial is %d",fact);
		
		factorial++;
	}
	printf("the factorial ran %d times",factorial);
	}	
