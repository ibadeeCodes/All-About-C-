#include<stdio.h>
#define PROD(x,y) (x*y)
#define sum(x,y) (x+y)
main()
{
    int i=7,j=2,k,l;
    k=PROD(i,j);
    l=sum(i,j);
    printf("product is=%d\nsum is=%d",k,l);
    
}
