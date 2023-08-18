#include<stdio.h>
int main()
{
	int pd_rate=350,q,a,d=0;
	printf("Enter the no of pendrives: ");
	scanf("%d",&q);
	
	if(q>=100)
		d=50;
	else 
		 d=10;	
		
	pd_rate=pd_rate-d;
	
	a=pd_rate*q;
	printf("\n Bill to be paid:%d",a);
	
	getch();
	return 0;
}
