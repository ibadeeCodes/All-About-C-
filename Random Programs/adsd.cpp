#include<stdio.h>
main()
{
	int i,std[4][2];
	for(i=0;i<=3;i++)
	{
		printf("enter roll number and marks");
		scanf("%d\n%d",&std[i][0],&std[i][1]);
	}
for(i=0;i<=3;i++)
{
	printf("%d-%d",std[i][0],std[i][1]);
	}
	
}

