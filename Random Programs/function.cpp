#include<stdio.h>
int pro(int a,int b)
{
	int multiplication;
	multiplication=a*b;
	return multiplication;
}
main()
{
	int num1,num2;
	printf("enter any two numbers");
	scanf("%d %d",&num1,&num2);
	int result= pro(num1,num2);
	printf("result is %d",result);
	return 0;
	
}
