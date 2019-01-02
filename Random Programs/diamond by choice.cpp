#include<stdio.h>
main()
{
	int i,j,k=0,rows;
	printf("enter number of rows for diamond");
	scanf("%d",&rows);
	{
	
	for(i=1;i<=rows;i++)
		{
		i<=(rows/2)?k++:k--;
		for(j=1;j<=rows;j++)
		{
			if(j>=(rows/2)-k && j<=(rows/2)+k)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
}
