#include<stdio.h>
#include<string.h>
int vowel(char[]);
int main()

{
	char a[50];
	printf("Enter any word: ");
	gets(a);
	printf("No of vowels in given word are: %d ",vowel(a));
	
}

int vowel(char a[])
{
int i,count=0;
for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>=65 && a[i]<=90)
		a[i]=a[i]+32;
	}	
for(i=0;a[i]!='\0';i++){
if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' ||a[i]=='u')
count++;
}
return count;
}


