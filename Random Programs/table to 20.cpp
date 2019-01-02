#include <stdio.h> 
int main()
{
    int i,j,k;   
    int num;
  
    for(i=1; i<=20; i++) 
    {
	
        num= i;
        for(j=1; j<=10; j++)
        {
             k=num*j;
            printf("%d=%d*%d\n",k,num,j);
        }
  
        printf("\n"); 
    }
    return 0;
}
