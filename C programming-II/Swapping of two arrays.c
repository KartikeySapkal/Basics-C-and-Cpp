#include<stdio.h>
int main()
{
	int i,j,size,temp;
	
	printf("Enter the size of array's: ");
	scanf("%d",&size);
	
	int a[size], b[size];
	printf("\nenter the values in  first array : \n");
	for(i=0;i<size;i++)
		scanf("%d",&a[i]);
	
	printf("\nenter the values in second array : \n");
	for(i=0;i<size;i++)
		scanf("%d",&b[i]);	
		
	for(i=0;i<size;i++)
	{
		temp=a[i];
		a[i]=b[i];
		b[i]=temp;
	}
	printf("The values in array a are : ");
	for(i=0;i<size;i++)
	printf("%d",a[i]);
	
	printf("The values in array b are : ");
	for(i=0;i<size;i++)
	printf("%d",b[i]);
	
	return 0;
}
