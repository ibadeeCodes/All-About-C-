#include<stdio.h>
#include<conio.h>
int sum(int);
main()
{
	int k,a;
	printf("enter a value");
	scanf("%d",&a);
	k=sum(a);
	printf(" The sum of first %d numbers is %d",a,k);
}
int sum(int a){
	int s;
	if(a==1)
	{
		return(a);
	}
	else
	{
		s=a+sum(a-1);
		return(s);
	}
}
