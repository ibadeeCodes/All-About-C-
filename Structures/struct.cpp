#include<stdio.h>
main()
{
	char name[][10]={"ibad",
	                  "saif",
	                  "ahmed",
	                  "qadir",
	                  "kazim",
	                  "sadat",
	                  "shahmeer",
	};
	int i;
	char t;
	printf("original=%s %s",&name[0][0],&name[1][0]);
	
	for(i=0;i<=9;i++)
	{
		t=name[0][i];
		name[0][i]=name[1][i];
		name[1][i]=t;
	}
	printf("updated =%s %s\n",&name[0][0],&name[1][0]);
}
