#include<stdio.h>
int main()
{
	int i,j,k,r;
	printf("Enter no of rows: ");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		k=i;
		for(j=1;j<=i;j++)
		{
			printf("%4d",k);
			k=k+r-j;
		}
	printf("\n");
	}	
	return 0;
}
