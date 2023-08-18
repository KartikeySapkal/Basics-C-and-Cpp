#include<stdio.h>
int main()
{
	int i,temp,size;
	printf("Enter siz e of array: ");
	scanf("%d",&size);
	
	int a[size];
	printf("Enter the values in array: \n");
	for(i=0;i<size;i++)
	scanf("%d",&a[i]);
	
	printf("This is array before reversing: \n");
	for(i=0;i<size/2;i++)
    {
		temp=a[i];
		a[i]=a[size-1-i];
		a[size-1-i]=temp;
	}
	
		printf("array after reversing: \n");
		for(i=0;i<size;i++)
		{
			printf("\n%d",a[i]);
		}	
	
	return 0;
}
