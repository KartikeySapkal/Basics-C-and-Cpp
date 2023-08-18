#include<stdio.h>
int main()
{
	int i,size,max,location;
	
	printf("Enter the size for array: ");
	scanf("%d",&size);
	
	int a[size];
	
	printf("\nEnter %d values: \n",size);
	for(i=0;i<size;i++)
		{
		scanf("%d",&a[i]);
		}
	max=a[0];	
	for(i=0;i<size;i++)	
	{
		if(a[i]>max)
		{
			max=a[i];
			location=i;
		}
	}
	printf("\nmaximum value in array a is :%d at location :%d",max,location);	
		
	return 0;	
	}
