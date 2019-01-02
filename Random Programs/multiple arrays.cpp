#include<stdio.h>
#include<conio.h>
#define PI 3.142
#define prod(x,y) (x*y)
#define sum(x,y) (x+y)
#define area(r) printf("the area of circle is %f\n",4*PI*r*r)
int main()
{
	int prod=1,ibbi[4],r,sum=0;
	float area;
	for(r=1;r<5;r++)
	{
		scanf("%d\n",&ibbi[r]);
		area(r);
		sum+=ibbi[r];
		prod*=ibbi[r];
	}
	printf("the sum is=%d\n",sum);
	printf("the product is %d\n",prod);
}
