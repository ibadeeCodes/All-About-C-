#include<stdio.h>
main(){
	char n;
	scanf("%c",&n);
	switch(n)
	{
		case'A':
		{
			printf("australia");
			break;
		}
		case 'B':
			{
				printf("belgium");
				break;
			}
			case 'C':
				{
					printf("canada");
					break;
				}
				default:
					{
						printf("not a valid input");
					}
	}
}

