#include<stdio.h>
main()
{
	int a,res=1,i;
	printf("enter any number");
	scanf("%d",&a);
	for(i=a;i>=1;i--)
	{
		res=res*i;
	}
	printf("the factorial of %d = %d",a,res);
	
}

