#include<stdio.h>
int main()
{ //Bill Calculator using else if ladder 
	int pd_rate=350,q,a,d=0;
	printf("Enter the no of pendrives: ");
	scanf("%d",&q);
	
	if(q=500)
		d=80;
	 else if(q>=300)
	         d=50;
	 else if(q>=100)
	     	d=30;		
	else 
		 d=10;	
		
	pd_rate=pd_rate-d;
	
	a=pd_rate*q;
	printf("\n Bill to be paid:%d",a);
	
	getch();
	return 0;
}
