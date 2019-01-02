#include<stdio.h>
#include<conio.h>
main()
{
	int a[4][4],b[4][4],i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			a[i][j]=b[j][i];
		}
	}
	for(i=0;i<4;i++)
	{
		for(j
		=0;j<4;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
}

