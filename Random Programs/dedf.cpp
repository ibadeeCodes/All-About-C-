#include<stdio.h>
main()
{
	int i,j;
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=10;j++)
		{
			if(j==1||i==1||j==10||i==10)
			{
				printf("*");
			
			}
			else if(i==2||j==2||i==9||j==9)
			{
				printf("0");
			}
			else
				{
					printf("0");
				}
			}
			printf("\n");
		}	
	}


