#include<stdio.h>
main()
{
	int i,j,p;
	for(i=2;i<=50;i++)
	{
		p=1;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				p=0;
				break;
			}
			if(p==1)
			{
				printf("%d,",j);
			}
		}
	}
}
