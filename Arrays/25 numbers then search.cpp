// QUESTION==twenty five numbers are entered through the keyboard
//into an array.the number to be searched is entered through the
//keyboard by the user.write a program to find if the number to be 
//searched is present in the array and if it presents display
//the number of times it appears in the array.....
#include<stdio.h>
main()
{
	int a[25],i,j,k,num=0;
	for(i=0;i<25;i++)
	{
		printf("Enter Number=");
		scanf("%d",&a[i]);
	}
	printf("\n\nSearch A Number In Array:");
	scanf("%d",&k);
		for(i=0;i<25;i++)
		{
			if(k==(a[i]))
			num++;
		}
		printf("The Number Exists %d times in the array",num);
}
