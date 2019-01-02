#include<stdio.h>
main()
{
	int *arr[4],i,m,j,k,l;
	arr[0]=&i;
	arr[1]=&j;
	arr[2]=&k;
	arr[3]=&l;
	for(m=0;m<=3;i++)
	{
		printf("the adress is %d\n",*(arr[m]));
	}
}
