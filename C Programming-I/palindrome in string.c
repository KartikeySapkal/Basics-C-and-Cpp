#include<stdio.h>
int main()
{
	int i,len,j,flag=1;
	char string[50];
	
	printf("ENter the string: ");
	gets(string);
	
	for(len=0; string[len]!='\0'; len++);	
	
	for(i=0,j=len-1; i<len/2; i++,j--)
	{
		if(string[i]!=string[j])
		{
			flag=0;
			break;	
		}		
			
	}

if(flag==1)
	printf("Its an palindrome");
else
	printf("Its not palindrome");

return 0;	
}
