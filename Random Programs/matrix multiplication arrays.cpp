#include<stdio.h>
main()
{
	int a[4][4],b[4][4],c[4][4],i,j;
	printf("enter values for matrix A:");
	{
	
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
}
	printf("enter values for matrix B:");
	{
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		{
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
}
	printf("the C matrix is:");
	{
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			c[i][j]=a[i][j]*b[i][j];
			printf(" %d ",c[i][j]);
		}
		printf("\n");
	}
}
}
