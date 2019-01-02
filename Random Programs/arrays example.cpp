#include<stdio.h>
main()
{
	int arr[4][2]={
	               {1234,34},
	               {1235,35},
			       {1236,36},
			       {1237,37},
			   };
	int i,j;
	for(i=1;i<=3;i++)
	{
		for(j=0;j<=1;j++)
	    {
	    	printf("%d\n",*(*(arr+i)+j));
	    	
	    	
		}

	}
	
}
