#include<stdio.h>
void modify(void);
int main()
{
	int a[10];
	modify();
}
void modify(void)
{
	int a[10]={1,2,3,4,5,6,7,8,9,10},i,j;
	for(i=0;i<10;i++)
	{
		printf("the value is:%d\n",(a[i]*3));	
	}
}
