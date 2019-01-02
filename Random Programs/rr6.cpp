#include<stdio.h>
main()
{
	int k,i,j,rows;
	printf("enter numbers of rows");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=rows;j++)
		{
		
		if(i==1||i==rows||j==1||j==rows)
		{
			printf("*");
		}
		else if(i>1||i<rows)
		 
		{
		printf("0");	
		}
		
	}
	printf("\n");	
	}
	
}
