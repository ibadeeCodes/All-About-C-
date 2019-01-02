#include<stdio.h>
int zgap(int);
main()
{
	
	int i,j,rows;
	printf("enter numbers of rows=");
	scanf("%d",&rows);
	zgap(rows);
}
zgap(int rows)
{
	int i,j;
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=rows;j++)
		{
		
		if(i==1||i==rows||j==1||j==rows)
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
