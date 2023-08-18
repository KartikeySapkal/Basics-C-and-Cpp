#include<stdio.h>
int main()
{
	char a[20];
	printf("Enter any Name: ");
	gets(a);
	char *ptr;
	ptr=a;
	
	while(*ptr)
{
	
	printf("%c\n",*ptr++);
	
	}	
	
	return 0;
}
