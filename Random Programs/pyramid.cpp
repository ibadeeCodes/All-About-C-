#include<stdio.h>
main()
{
	int i,j,k=0;
	
	for(i=1;i<=7;i++)
	if(i<=4)
	{
		for(j=1;j<=7;j++)
		{
			if(j>=5-i&&j<=3+i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}}
	

	/*else
	{
		for(j=7;j>=1;j--)
		{
			if(j>=i-3&&j<=i+1)
			
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}*/

