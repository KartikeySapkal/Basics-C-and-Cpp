//ARRAY
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,size;
	
	
printf("Enter the size of array: ");	
scanf("%d",&size);

int a[size];

	printf("Enter the %d values:\n",size);
	for(i=0; i<size; i++)
		scanf("%d",&a[i]);
		
	printf("values enter by user are: \n" );
	 for(i=0;i<size;i++)
		 	printf("%d \n",a[i]);	
getch();
return 0;
}

