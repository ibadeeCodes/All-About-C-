#include<stdio.h>
int display(int ,int );
int main()
{
	int i,j,row,col;
	printf("enter number of rows");
	scanf("%d",&row);
	printf("enter number of columns");
	scanf("%d",&col);
	display(col,row);
	
}
int display(int row,int col)
 {
 	int i,j;
 	for(i=1;i<=row;i++)
 	{
 		for(j=1;j<=col;j++)
 		{
 			printf("%d",j);
		 }
		 printf("\n");
	 }
	 
 }

