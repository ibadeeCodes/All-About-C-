#include<stdio.h>
main()
{
	int i,j,rows,k,l;
	//printf("enter number of rows");
	//scanf("%d",&rows);
	for(i=65;i<=74;i++)
	{
		for(j=1;j<=i;j++)
		printf(" %c",j);
		printf("\n");
	}
	for(k=65;k<=74;k++)
	{
		for(l=10;l>=k;l--)
		printf(" %c",l);
		printf("\n");
	}
}
