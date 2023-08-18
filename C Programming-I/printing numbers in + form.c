#include<stdio.h>
int main()
{
	int i,j,r;
	printf("ENter no of rows: ");
	scanf("%d",&r);
	if(r>9)
	printf("naah im bored");
	
	
	for(i=1;i<=r;i++)
{
		for(j=1;j<=r;j++)
	{
			if(i==r/2+1)
			printf("%d",j);
			else if(j==r/2+1) 
			printf("%d",i);
			else
			printf(" ");
			
	}
	printf("\n");
}
	
	return 0;
	
}
