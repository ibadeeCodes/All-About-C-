#include<stdio.h>
main()
{
	int i,j,rows,k;
	printf("enter number of rows");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i==j)
			{
				k=i*i;
				printf("%d",k);
			}
			else
			printf("%d",j);
		}
		printf("\n");
	}
	
}
