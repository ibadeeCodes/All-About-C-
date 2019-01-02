#include<stdio.h>
#include<conio.h>
int main()
{
	int a[3][3],i,j;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("enter a number");
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("Matrix:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("Transpose of given matrix :\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
}
