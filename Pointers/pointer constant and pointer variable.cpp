#include<stdio.h>
#include<string.h>
main()
{
	float temp[40],sum=0.0;
	int num,day=0;
	do{
		printf("enter temp for day %d:",day);
		scanf("%d",temp+day);
	}
	while(*(temp+day++)>0);
	num=day-1;
	for(day=0;day<num;day++)
	sum=sum+(*(temp+day));
	printf("average is %1f",sum/num);

}
