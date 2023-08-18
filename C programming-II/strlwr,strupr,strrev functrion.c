#include<stdio.h>
#include<string.h>
int main()
{
	char name1[50];
	
	printf("Enter name1=");
	gets(name1);
	
	strrev(name1); //use strlwr, strupr, strrev
	printf("%s",name1);
	 
	
	return 0;
	
}
