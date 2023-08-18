#include<stdio.h>
int main()
{
	int a,i,n,count=0;
	printf("Enter any number: ");
	scanf("%d",&a);
	n=a;
	for(i=1;i<=a;i++)
	{
	   if(a%i==0)
 count++;}
 if(count==2)
printf("The number is prime number",count);
else
printf("the number is not prime");
	return 0;
	}
	
