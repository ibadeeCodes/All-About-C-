#include<stdio.h>
main()
{
	int i,j,rows,nog;
	//printf("enter number of rows");
	//scanf("%d",&rows);
	for(i=1;i<=4;i++)
	{
		for(nog=3;nog>=i-1;nog--)
		{
			for(j=1;j<=4;j++)
			{
				printf("*");
			}
			printf(" ");
		}
		printf("\n");
	}
}
