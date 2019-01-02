#include<stdio.h>
main()
{
	int i,j,k;
	printf("enter  number of rows");
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
