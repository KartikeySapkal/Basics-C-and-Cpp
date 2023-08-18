#include<stdio.h>
void concat(char[],char[]);

int main()
{
	char s1[30],s2[30];
	
	printf("Enter string 1: ");
	gets(s1);
	printf("\nEnter string 2: ");
	gets(s2);
	
	concat(s1,s2);
	
	printf("\nAfter concatenation: \n");
	printf("\n s1=%s",s1);
	printf("\n s2=%s",s2);
	
	return 0;
}
void concat(char s1[],char s2[]){
	
	int i=0,j=0;
	while(s1[i])
	
	{
		i++;
	}
	while(s2[j])
	{
		s1[i]=s2[j];
		i++;j++;
	}
	s1[i]='\0';
}
