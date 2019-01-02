#include<stdio.h>
int main()
{
	int arr[6][4],i,j,a,b;
	float area;
	for(i=0;i<=5;i++)
	{
		for(j=0;j<=3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<1;i++)
	{
		for(j=1;j<=3;j++)
		
		{
			area=((1/2)*arr[i][j]*arr[i][j]*arr[i][j]);
			
			printf("%d",area);
		}
		printf("\n");
	}
	

}
