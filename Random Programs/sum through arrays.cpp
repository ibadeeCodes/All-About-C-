#include<stdio.h>
main()
{
	int ibbi[4],i,sum=0;
	for(i=1;i<5;i++)
	{
		scanf("%d\n",&ibbi[i]);
		sum+=ibbi[i];
	}
	
	printf("the sum is=%d",sum);
}
