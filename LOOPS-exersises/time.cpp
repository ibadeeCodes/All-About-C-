#include<stdio.h>
#include<conio.h>
main()
{
	    int i=1;
for(i=1;i<=24;i++)
{
	if(i<=11)
	{
		printf("%d:00 A.M\n",i);
		
	}
	else if(i==12)
	{
		printf("%d:00 MIDNIGHT\n",i);
	}
	else
	{
		printf("%d:00 P.M\n",i);
	}
	}	
}

