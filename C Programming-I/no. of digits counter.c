#include<stdio.h>
int main()
{
	int x,a,count=0;
	
printf("Enter number: ");
scanf("%d",&x);
a=x;

    for( count=1;x!=0;count++)
	{
		x=x/10;
		
		
	}
	
	printf("digit are %d = %d hehehe",a,count);
    return 0;	
}
