#include<stdio.h>
int main()
{
	int a,i,n;
	printf("Enter any number: ");
	scanf("%d",&a);
	n=a;
	for(i=1;i<=a;i++)
	{
	   if(a%i==0)
	    printf("%d \n",i);
   	}
	return 0;
		
	}
	
