#include<stdio.h>
main()
{
	int i,j,sum=0,product=1;
	for(i=1;i<=5;i++)
	{
		
		scanf("%d",&j);
		sum=sum+j;
		product=product*j;}
	printf("the sum is %d\nthe product is %d",sum,product);
}
