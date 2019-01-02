#include<stdio.h>
main()
{
	int a[3][3],i,j,d1=0,d2=0,k;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("enter number:");
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			for(k=0;k<=1;k++)
			{
				d1=(a[k][k]*a[2][2])-(a[2][k]*a[k][2]);
				d2=d1*a[0][i];	
			}	
		}
	}
	printf("determinent is %d",d2);
}
