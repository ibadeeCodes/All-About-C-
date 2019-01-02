#include<stdio.h>
main()
{
	int i,j,k=0;
		i<=4?k++:k--;
	for(i=1;i<=7;i++)
	{
		
		for(j=1;j<=7;j++)
		{
			if(j>=5-i&&j<=3+i)
			
			{
			
				printf("%d",j);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	}
	
