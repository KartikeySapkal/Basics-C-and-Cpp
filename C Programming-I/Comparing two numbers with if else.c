#include<stdio.h>
int main()
{
	int a,b;
	
	printf("Enter the first number:");
	scanf("%d",&a);
	
	printf("\nEnter the second number:");
	scanf("%d",&b);
	
	if(a==b)
	      printf("\n both numbers are equal");    
    else if(b>a)
	       printf("\n%d is greater",b);	
	else
	       printf("\n%d is greater",a);	     
	       
	       getch();
	       return 0;
		   }
