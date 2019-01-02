#include<stdio.h>
main()
{
	int i;
	int arr[]={0,1,2,3,4,5};
	for(i=0;i<=5;i++)
	{
		printf("number=%d\n",i);
		printf("address=%u\n",&arr[i]);
	}
}
