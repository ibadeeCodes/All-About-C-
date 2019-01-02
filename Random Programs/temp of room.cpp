#include<stdio.h>
main()
{
	int i;
	printf("enter temperature of the room");
	scanf("%d",&i);
	if(i==25)
	{
		printf("its room temperature");
	}
	else if(i>30)
	{
		printf("close the heater");
	}
	else if(i<10)
	{
        printf("open the heater");		
	}
	else
	{
		printf(" ");
	}
return 0;


}






