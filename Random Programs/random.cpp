#include<stdio.h>
main()
{
	int k,i,j,rows;
 printf("enter number of rows");
 scanf("%d",&rows);
 for(i=1;i<=rows;i++)
 {
 	for(j=1;j<=i;j++)
 	if(i==j)
 	{
 		k=j*j;
 		printf("%d",k);
	 }
	 else
 	{
 		printf("%d",j);
	 }
	 printf("\n");
 }
}

