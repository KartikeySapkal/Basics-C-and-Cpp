#include<stdio.h>
void f1();
void f2();
int main()
{
	printf("Calling f1\n");
	f1();
	printf("back to main\n");
	return 0;
}
void f1()
{
	printf("calling f2\n");
	f2();
	printf("back in f1\n");
	
}
void  f2()
{
	printf("In f2\n");
	
}
