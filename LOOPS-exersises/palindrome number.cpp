#include<stdio.h>
main()
{
	int lim,i,j,k,l,m,n;
	printf("enter the limit");
	scanf("%d",&lim);
	for(i=1;i<=lim;i++)
	
	{
		j=i%10;
		k=i/10;
		l=k%10;
		m=k/10;
		n=((j*j*j)+(l*l*l)+(m*m*m));
		if(n==i)
		{
			printf("it is a palindrome number %d\n",n);
			
		}
		else
		{
	}
	}
}
