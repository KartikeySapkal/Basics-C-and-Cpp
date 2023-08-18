#include<stdio.h>
int fact(int);
int main()
{
    int num;
	printf("Enter Any Value: ");
	scanf("%d",&num);	
	printf("Factorial = %d",fact(num));
	return 0;
}
int fact(int x){ 
	int i;
	int factorial=1;
	for(i=x;i>=1;i--)
	{
	factorial=factorial*i;
		}
	return factorial;
}
