#include<stdio.h>
void concat(char*,char*);
int main()
{
	char str1[30],str2[30];
	puts("Enter first string: ");
	gets(str1);
	
	puts("ENter string 2: ");
	gets(str2);
	
	concat(str1,str2);
	
	printf("\n After concatination the strings are: ");
	printf("\n str1=%s",str1);
	printf("\n str2=%s",str2);

	return 0;	
}
void concat(char*pstr1,char*pstr2)
{
	while(*pstr1)
	{
		*pstr1++;
	}
	
	while(*pstr2)
	{
		*pstr1++=*pstr2++;
	}
	*pstr1='\0';
}

