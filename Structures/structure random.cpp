#include<stdio.h>
struct date
{
	int d,m,y;
};
struct student
{
	int rollno;
	char name[20];
	float age;
};
int main()
{
	struct date today;
	today.d;
	today.m;
	today.y;
	struct stdudent record;
	record.rollno;
	record.name;
	record.age;
	printf("enter day/month/year");
	scanf("%d/%d/%d",&today.d,&today.m,&today.y);
	printf("enter rool number,name,age");
	scanf("%d %s %f",&record.rollno,&record.name,&record.age);
	printf("Today's Date is %d/%d/%d",today.d,today.m,today.y);
	printf("roll no=%d\n name=%s\nage=%f",record.rollno,record.name,record.age);
}
