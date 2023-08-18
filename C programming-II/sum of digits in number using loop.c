#include<stdio.h>
int main()
{
	int a,b,n,sum=0;
	printf("Enter any number: ");
	scanf("%d",&a);
	n=a;
	for( ;a>0;)
{
	b=a%10;
	sum=sum+b;
	a=a/10;
		}
	
	printf("sum of digits of %d= %d",n,sum);
		
	return 0;
	
	
	
}
