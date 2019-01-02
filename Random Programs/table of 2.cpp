#include<stdio.h>
main()
{
	int i,j,k;
	printf("the table of two is written below\n");
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=10;j++)
		{
			k=2*j;
		     printf("2*%d=%d",j,k);
		}
			
		printf("\n");
	}
	
}
