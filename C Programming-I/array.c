//ARRAY
#include<stdio.h>
int main()
{
	int i;
	
	int a[5];
	printf("Enter any 5 values: \n4");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);


	printf("Values entered by user are:\n");
	for(i=0;i<5;i++)
		printf("%d\n",a[i]);	

return 0;
}

