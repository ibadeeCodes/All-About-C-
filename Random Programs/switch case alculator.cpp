#include<stdio.h>
main()
{
	int a,b;
	char choice;
	printf("enter any two numbers");
	scanf("%d %d",&a,&b);
    printf("enter any operator\n");
	scanf("%c",&choice);
	switch(choice)
	{
		case'+':
		{
			printf("the sum is %d",a+b);
			break;
		}
		case'-':
		{
		printf("the subtraction is %d",a-b);
		break;
	}
	case'*':
		{
			printf(" the multiplication is %d",a*b);
			break;
		}
		case'/':
			{
				printf("the division is %d",a/b);
				break;
			}
			default:
				{
					printf("the operator is not valid");				}
		
	}
}

