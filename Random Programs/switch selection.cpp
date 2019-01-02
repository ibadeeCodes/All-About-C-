#include<stdio.h>
#include<conio.h>
#define PI 3.142
#define area(r) printf("The Area Is=%f",4*PI*r*r);
int main()
{
	int i,j,fact=1,c,n,l,arr[l],k,m,o,lim[o];
	float a,b,sum,sum1=0,area,r,avg;
	printf("___ENTER TO THE MENU___\n\n\n");
	printf("1)Factorial.\n2)Odd Or Even.\n3)Find Sum Of Only Two Numbers.\n4)Find The Sum Of Infinit Numbers(Users Wish) Through Arrays.\n5)Find Area Of Circle Through (MACROS).\n6)Find Average of Infinite Numbers(Users Wish) Through Arrays.\n7)Exit.\n");
	printf("Press A Choice=");
	scanf("%d",&i);
	
	switch(i)
	{
		case 1:
			{
				printf("Enter A Number To Find Its Factorial=\n");
				scanf("%d",&n);
				{
					while(n!=1)
					{
						fact=fact*n;
						n--;
					}
					printf("The Factorial Is=%d\n",fact);
				}
				break;
			}
			case 2:
				{
					printf("Enter A Number To Check Either Its Odd Or Even:\n");
					scanf("%d",&c);
					if(c%2==0)
					{
						printf("%d Is Even.",c);
					}
					else
					{
						printf("%d Is Odd.",c);
					}
				}
				break;
			
			case 3:
				{
				printf("Enter Any Two Numbers:\n");
				printf("enter a=");
				scanf("%f",&a);
				printf("enter b=");
				scanf("%f",&b);
				sum=a+b;
				printf("The Sum Is=%f.",sum);	
				}
			break;	
			case 4:
				{
					printf("enter the limit=");
					scanf("%d",&l);
					for(k=0;k<l;k++)
					{
						printf("enter number=");
					scanf("%d",&arr[k]);
					sum1=sum1+arr[k];
					}
					printf("the sum is=%f",sum1);
				}		
                 break;			
				case 5:
					{
						printf("enter the radius=");
						scanf("%f",&r);
						area(r);
					}
					break;
					case 6:
						{
							printf("enter the limit of numbers for average=");
					        scanf("%d",&o);
					for(m=0;m<o;m++)
					{
						printf("enter the number=");
					    scanf("%d",&lim[m]);
					    sum1=sum1+lim[m];
					}
					avg=sum1/o;
					printf("the average is=%f",avg);
						}
						break;
						case 7:
							break;
		    default:
		    	{
		    		printf("Select A Valid Choice.");
		        }
				break;
	}
	printf("\n\nTHANKS FOR USING iS'TECH SOFTWARE (registered)\n");
}

