#include<stdio.h>
int main()
{
	int i,count=0;
	
	char a[30];

	printf("Enter string: ");
	gets(a);
	 
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==32)
		count++;
	}
	 
	printf("The no. of spaces are: %d",count); 
	printf("The no. of characters are: %d",i); 
	
	return 0;
}
