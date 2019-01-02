#include<stdio.h>
#include<conio.h>
int main()
{
	int ibbi[3],r,x,sum=0;
	float avg;
	for(r=0;r<3;r++)
	{
		scanf("%d\n",&ibbi[r]);
		sum=sum+ibbi[r];
	}
	avg=sum/3;
	printf("the average is=%f",avg);
}
