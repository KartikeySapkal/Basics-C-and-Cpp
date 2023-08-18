#include<stdio.h>
int main()
{
	int i,j,k,size,sum;
	
	printf("Enter the size of  square array: ");
	scanf("%d",&size);
	
	int a[size][size], b[size][size], c[size][size];
	
	printf("Enter the values of array A: \n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	printf("\nEnter the values of array B: \n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
//multiplication	

for(i=0;i<size;i++)
{
	for(j=0;j<size;j++)
	{		
		sum=0;
		for(k=0;k<size;k++)
		{
			sum=sum+a[i][k]*b[k][j];			
		}
		c[i][j]=sum;
	}	
}

	printf("\n\nmatrix A: \n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

	printf("\nmartix B: \n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	
	printf("\nMultipliaction of above\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}



return 0;
}






