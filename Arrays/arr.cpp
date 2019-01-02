#include<stdio.h>
main()
{
	int a[25],even=0,odd=0,neg=0,pos=0,i,j;
	for(i=0;i<25;i++)
	{
		printf("enter a number");
		scanf("%d",&a[i]);
		if(a[i]>0)
		
		{pos++;
		if(a[i]%2==0)
		even++;
		else
		odd++;
		}
		else
		{
			neg++;
		}
	}
	printf("\n*Total Positive Numbers=%d\n",pos);
	printf("*Total Negative Numbers=%d\n",neg);
	printf("*Total Odd Numbers=%d\n",odd);
	printf("*Total Even Numbers=%d\n",even);
}
