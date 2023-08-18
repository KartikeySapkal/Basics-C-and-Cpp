#include<stdio.h>
int add(int,int);
int main()
{
	int a,b,result;
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	
	printf("%d + %d = %d",a,b,add(a,b));
	
	return 0;
}
int add(int x,int y)
{
	
return x+y;
	
}
