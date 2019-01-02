#include<stdio.h>
void display(int);
main()
{
	int k;
	printf("enter the limit");
	scanf("%d",&k);
	display(k);
}
void display(int n)
{
	int arr[n],sum=0,i;
	for(i=0;i<n;i++)
	{
		printf("enter the number");
	scanf("%d",&arr[i]);
	sum=sum+arr[i];
	}
	printf("the sum is %d",sum);
}
