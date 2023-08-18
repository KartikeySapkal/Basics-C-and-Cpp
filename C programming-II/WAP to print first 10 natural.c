#include<stdio.h>
int main()
{ int a,i,sum=0;
	printf("Enter number : ");
	scanf("%d",&a);
	for(i=1; i<=a;i++)
    {
    		sum=sum+i;
	}
	
	printf("sum=%d",sum);
	return 0;
}
