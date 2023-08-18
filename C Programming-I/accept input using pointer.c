#include<stdio.h>
int main()
{
	int a,b;
	int *aa=&a,*bb=&b;
	
	printf("a=");
	scanf("%d",aa);
	
	printf("b=");
	scanf("%d",bb);
	
	printf("\na+b=%d",*aa+*bb);
	
	
	return 0;
}
