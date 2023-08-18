#include<stdio.h>
int factorial(int);
int main()
{
	int num;
	int fact;
	
	printf("Enter number to find factrial: ");
	scanf("%d",&num);
	
	fact=factorial(num);
	printf("Factorial of %d is %d",num,fact);
	return 0;
	
}
int factorial(int n){
	if(n==0)
		return 1;
	else
		return (n*factorial(n-1));

}
