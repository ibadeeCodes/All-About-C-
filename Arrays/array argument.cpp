#include<stdio.h>
#include<string.h>
int arr(int s[]);
int main()
{
	int sum, s[10];
	sum=arr(s);
	printf("the sum is %d",sum);
}
int arr(int a[])
{
	int i,sum=0;
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}

	return sum;
}
