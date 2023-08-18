#include<stdio.h>
int main()
{
	int i,a,result=0;
	
	printf("Enter any number: ");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++)
{
		result=result+i*i;
}
	
printf("sum of squares of natural no.s upto given number is %d",result);
	
return 0;	
	
}


