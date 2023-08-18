#include<stdio.h>
int main()
{
	int i,j,size,user;
	
	printf("Enter size of array: ");
	scanf("%d",&size);
	
	int a[size];
	
	printf("Enter values in array: \n");
	for(i=0;i<size;i++)	
	scanf("%d",&a[i]);
		
		
	printf("Enter the value to delete from array :");
	scanf("%d",&user);
	
	  for(i=0;i<size;i++)
	{
		if(a[i]==user)
		break;
					}
	for(j=i;j<size;j++)
	a[j]=a[j+1];
	size--;
	
	printf("\narray after deletion is: \n");
	for(i=0;i<size;i++)
	{
		printf("%d \n",a[i]);
	}
	
	return 0;
}
