//arrays and functions...
#include<stdio.h>
void display(int);
int main()
{
	int i;
	int marks[]={65,75,66,78,76,78,67};
	for(i=0;i<7;i++)
	
		display(marks[i]);
	
}
void display(int m)
{
	printf("%d\n",m);
}


