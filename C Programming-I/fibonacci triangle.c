#include<stdio.h>
int main()
{
	int i,j,r,next,a,b;
	
	printf("Enter rows: ");
	scanf("%d",&r);
	
	for(i=1;i<=r;i++){
	a=0;
	b=1;
	for(j=1;j<=i;j++){
		printf("%d  ",a);
		next=a+b;
		a=b;
		b=next;		
	}
	printf("\n");
	}
	return 0;}
