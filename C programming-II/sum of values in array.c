#include<stdio.h>
int main()
{
	int i,size,sum=0;
	
	printf("Enter the size for array: ");
	scanf("%d",&size);
	
	int a[size];
	
	printf("\nEnter %d values: \n",size);
	for(i=0;i<size;i++)
		{
		scanf("%d",&a[i]);
		sum=sum+a[i];
		}
	printf("sum of given values of a is: %d",sum);
	
	return 0;
}
