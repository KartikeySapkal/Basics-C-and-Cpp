#include<stdio.h>
int main()
{
	int i,num1,num2,product=0;
	
	printf("Enter two numbers: ");
	scanf("%d %d",&num1,&num2);
	
	for(i=1;i<=num2;i=i+1)
	{
		
		product=product+num1;
		
	}
	printf("Product= %d",product);
    
	return 0;		
}
