#include<stdio.h>
#include<conio.h>
main()
{
	int num,n,pos=0,neg=0,zero=0,i=0;
	printf("_________NUMBER-COUNTING-GAME__________\n\n\n");
	printf("Enter The Limit=");
	scanf("%d",&n);
	while(i<n)
	{
		printf("Enter A Number=");
	scanf("%d",&num);
	printf("\n");
		if(num>0)
		pos++;
		else if(num<0)
		neg++;
		else if(num==0)
		zero++;
		else
		{}
		++i;		
	}
	printf("Total Positive Numbers Are=%d\n",pos);
		printf("Total Negative Numbers Are=%d\n",neg);
		printf("Total Zeros Are=%d\n\n\n",zero);
		printf(".....GAME-ENDED.....");
	
}
