#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,fact=1;
	for(i=1;i<=8;i++)
	{
		for(j=i;j>=1;j--)
		{
			fact=fact*j;
			fact++;
			printf("fact=%d\n",fact);
		}
		printf("\n");
	}
}
