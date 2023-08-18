#include<stdio.h>
#include<string.h>
int main()
{
	char name1[50];
	
	printf("Enter name1=");
	gets(name1);
	
	strlwr(name1);
	 printf("%s",name1);
	 
	
	return 0;
	
}
