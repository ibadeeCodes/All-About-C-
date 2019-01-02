#include<stdio.h>
#include<conio.h>
int datef(int d1,int d2,int m1,int m2,int y1,int y2);
int main()
{
	int d1,d2,m1,m2,y1,y2,s;
	printf("enter date in format d/m/y\n");
	scanf("%d\%d\%d",&d1,&m1,&y1);
	printf("enter another date in format d/m/y\n");
	scanf("%d\%d\%d",&d2,&m2,&y2);
	printf("the date difference is %d",datef(d1,d2,m1,m2,y1,y2));
}
int datef(int d1,int d2,int m1,int m2,int y1,int y2)
{
	int p,s,m,y;
	m=((m1*30)-(m2*30));
	y=((y1*365)-(y2*365));
	s=m+y+d1+d2;
	if(s>1)
	return s;
	else
	p=(s*(-1));
	return p;	
}
