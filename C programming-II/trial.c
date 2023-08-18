#include<stdio.h>
int main()
{
	int a;
	char b;
	printf("ENter integer: ");
	scanf("%d",&a);
	fflush(stdin);
	printf("Enter character: ");
	scanf("%c",&b);
	
	printf("a=%d and b=%d",a,b);
	
}
