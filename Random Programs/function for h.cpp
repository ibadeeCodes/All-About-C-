#include<stdio.h>
int function(int);
main()
{
	int rows;
	printf("enter number of rows");
	scanf("%d",&rows);
	function(rows);
}
function(int rows)
{
	int i,j;
 for(i=1;i<=rows;i++)
 {
 	for(j=1;j<=rows;j++)
 	{
 		if(j==1||j==rows)
 		{
 			printf("*");
		 }
		 else
		 {
		 	printf(" ");
		 }
		 printf("\n");
	 }
 }	
}
