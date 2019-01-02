#include<stdio.h>
#include<conio.h>
main()
{
 char ch;
 int words=0, vowels=0,consonants=0;
 while((ch=getche())!='\r')
 {
 	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
 	vowels++;
 	else if(ch==' ')
 	words++;
 	else
 	consonants++;
	  } 	
	  printf("the total vowels are %d\n",vowels);
	  printf("the total consonats are %d\n",consonants);
	  printf("the total words are %d\n",words);
	  
	  }
	
	
	

