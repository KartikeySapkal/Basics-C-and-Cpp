#include<stdio.h>
int main()
{
	int i,j,size,user,count=0;
	
	printf("Enter the value to search in array :");
	scanf("%d",&user);
	
	printf("Enter size of array: ");
	scanf("%d",&size);
	
	int a[size];
	
	printf("Enter values in array: \n");
	for(i=0;i<size;i++)	
	scanf("%d",&a[i]);
	
	for(i=0;i<size;i++)
{
	if(a[i]==user)
	{printf("Given number is present in array at a[%d] location ",i);		
    count++;}
}
		if(count==0)
		{
			printf("\n %d is not in array",user);
		}	
	return 0;
}
