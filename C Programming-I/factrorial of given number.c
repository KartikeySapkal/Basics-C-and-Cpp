#include<stdio.h>
int main()
{ 
	int i,a,fact=1;
	printf("Enter any number");
	scanf("%d",&a);

	for(i=a;i>=1;i--)
    {
	fact=fact*i;
	}	
	printf("%d",fact);
	return 0;
}
