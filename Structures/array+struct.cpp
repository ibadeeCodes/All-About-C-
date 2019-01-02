#include<stdio.h>
#include<string.h>
main()
{
	struct book
	{
		char name[20];
		float  price;
		int pages; 
	};
	struct book b[100];
	int i;
	
	for(i=0;i<=99;i++)
	{
		printf("enter name price and pages.");
		fflush(stdin);
		scanf("%s %f %d",&b[i].name,&b[i].price,&b[i].pages);
	}
	for(i=0;i<=99;i++)
	{
		printf("name=%s price=%f pages=%d",b[i].name,b[i].price,b[i].pages);
	}
	return 0;
}
