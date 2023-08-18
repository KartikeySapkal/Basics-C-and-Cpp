#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{k=i;
		for(j=1;j<=5;j++,k=k+5)
		{
			printf("%4d",k);
					
		}
		printf("\n");
		
	}
	
	
}
