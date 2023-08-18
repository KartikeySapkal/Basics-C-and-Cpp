#include<stdio.h>
int main()
{
	
	int i,j,length,temp;
	
	printf("Enter the lenght for 2d array:  ");
	scanf("%d",&length);
	int a[length][length];
	
	printf("\nEnter %d elements:  \n",length*length);
	for(i=0;i<length;i++)
	{
		for(j=0;j<length;j++)
		{	printf("Enter element of %d row and %d column: ",i,j);
			scanf("%d",&a[i][j]);
		}		
	}
	printf("\ngiven matrix is: \n");
	for(i=0;i<length;i++)
	{
		for(j=0;j<length;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}

//transpose


	for(i=0;i<length;i++)
	{
		for(j=0;j<length;j++)
		{
			if(i<j)
			{
				temp=a[i][j];
				a[i][j]=a[j][i];
				a[j][i]=temp;
			}
							
		}		
	}
	
	printf("\nTranspose of given matrix is: \n");
	for(i=0;i<length;i++)
	{
		for(j=0;j<length;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
	return 0;
}
