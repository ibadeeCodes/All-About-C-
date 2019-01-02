#include<stdio.h>
main()
{
 int arr[]={1,3,4,5,6};
 int *j,*k;
 j=&arr[4];
 k=(arr+4);
 if(j==k){
 	printf("the 2 pointers point to the same location");
 }	
 else
 {
 	printf("the two pointer doesnt point to the same location");
 }
}
