#include<stdio.h>
#include<conio.h>
main()
{
  int i,sum=0,marks[30];
  float avg;
  for(i=0;i<=29;i++)
  {
  	printf("enter marks=");
  	scanf("%d",&marks[i]);
  	sum=sum+marks[i];
  }
  avg=sum/30;
  printf("the average is %f\n",avg);
  return 0;
  
  
  
}

