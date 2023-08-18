#include<stdio.h>
int main()
{
	int i,j,r;
	printf("ENter no of rows: ");
	scanf("%d",&r);
	
	
	for(i=1;i<=r;i++)
{
		for(j=1;j<=r;j++)
	{
			if(i==r/2+1||j==r/2+1)
			printf("*");
			else 
			printf(" ");
			
	}
	printf("\n");
}
	
	return 0;
	
}
