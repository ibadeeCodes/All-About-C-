#include<stdio.h>
#include<string.h>
main()
{
	int i,j;
	char s[6][10]={      "ibad",
	                     "saif son",
	                     "ahmed son",
	                     "qadir son",
	                     "kazim son",
	                     "asad son",
	                    };
	                    for(i=0;i<=5;i++)
	                    {
	                   	for(j=0;j<=9;j++)
	                   	{
	                   		printf("%c",s[i][j]);
						}
						   printf("\n");
					   }
					   getch();
					   printf("")
}
