//programm to add two matrices
#include<stdio.h>
int main()
{
	int i,j;
	int a[3][2],b[3][2],c[3][2];
	
	printf("ENter the elements f matrix 1: ");
	for(i=0;i<3;i++)
{
		for(j=0;j<2;j++)
	{
		
		printf("Enter values of a[%d][%d]= ",i,j);
		scanf("%d",&a[i][j]);
	}

}
	printf("ENter the elements of matrix 2: ");
	for(i=0;i<3;i++)
{
		for(j=0;j<2;j++)
	{
		
		printf("Enter values of b[%d][%d]= ",i,j);
		scanf("%d",&b[i][j]);
	}

}
	printf("sum of two matrices is: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]= a[i][j]+ b[i][j];
			printf("%d\t",c[i][j]);
		}
	printf("\n");
	}	
return 0;
}
