#include<stdio.h>
struct book
{
	int bookid;
	char title[];
	float price;
};
struct book input()
{
struct book b;
printf("enter book id,book name,book price");
scanf("%d",&b.bookid);
fflush(stdin);
gets(b.title);
scanf("%f",&b.price);
return (b);
}
void display(struct book b)
{
	printf("book id=%d\nbook name=%s\nbook price=%f",b.bookid,b.title,b.price);
}
int main()
{
	struct book b1;
	b1=input();
	display(b1);
}
