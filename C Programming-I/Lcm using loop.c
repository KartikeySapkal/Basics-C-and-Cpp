#include<stdio.h>
int main() 
{
	int i,bin,bit,dec=0;
	
	 printf("Enter Binary Number : ");
	 scanf("%d",&bin);
	 
	 for(i=1;bin!=0;i=i*2)
	{
		bit=bin%10;
		dec=dec+bit*i;
		bin=bin/10;				
	 } 
	 
	 printf("Decimal=%d",dec);
	return 0;
}
