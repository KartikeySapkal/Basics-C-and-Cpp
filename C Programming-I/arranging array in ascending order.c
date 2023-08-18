#include<stdio.h>
int main()
{
	int i,j,temp,size;
	
	printf("Enter any size of array: ");
	scanf("%d",&size);
	
	int a[size];
	
	printf("Give values in array:\n");
	for(i=0;i<size;i++)
	{
	scanf("%d",&a[i]);
	}
	
for(i=0;i<size-1;i++)
{
	for(j=i+1;j<size;j++)
	{
		if(a[j]<a[i])
		{
			temp=a[j];
			a[j]=a[i];
			a[i]=temp;
		}
	}	
}

	printf("\nsorted array is as follows\n");
	for(i=0;i<size;i++)
	{
	printf("%d\n",a[i]);
	}
	return 0;
}
