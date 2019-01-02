#include<stdio.h>
main()
{
	int a[10],i;
	for(i=0;i<10;i++)
	{
		printf("enter a number:");
		scanf("%d",&a[i]);
	}
	for(i=10;i>0;i--)
	{
		printf("reverse=%d\n",a[i]);
	}
	
}
