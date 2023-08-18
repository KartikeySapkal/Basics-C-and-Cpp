#include<stdio.h>
int fact(int);
int main()
{
	int a;
	printf("Enter the number for factorial: ");
	scanf("%d",&a);	
	printf("Factorial of given number is: %d",fact(a));
	return 0;	
	
}
int fact(int x){
	int i,prod=1;
	for(i=x;i>=1;i--)
	prod=prod*i;
	return prod;
}
