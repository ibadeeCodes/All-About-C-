#include<stdio.h>
main()
{
	int fact=1,a;
	printf("enter any number");
	scanf("%d",&a);
	if(a<1)
	{
		printf("enter any valid number");
		
	}
	else
	{
		while(a!=1)
	{
			fact=fact*a;
		a--;
	}
	printf("the factorial is %d",fact);	
	}
	
	
}




