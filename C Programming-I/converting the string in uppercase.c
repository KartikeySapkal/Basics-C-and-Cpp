//
#include<stdio.h>
int main()
{
	int i,count=0;
	
	char a[30];

	printf("Enter string: ");
	gets(a);
	 
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>=97 && a[i]<=122)
		a[i]=a[i]-32;
	}

	printf("uppercase string: %s",a);
	
	return 0;
}
