#include<stdio.h>
int main()
{
	char ch;
	printf("Enter any character:");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'a':
		case 'A':
		case 'E':	
		case 'e':
		case 'I':	
		case 'i':	
		case 'O':	
		case 'o':	
		case 'u':	
		case 'U':	
		printf("%c is vowel",ch);
		break;
	default:printf("%c is not vowel",ch);		
		
			}
			return 0;	
}
