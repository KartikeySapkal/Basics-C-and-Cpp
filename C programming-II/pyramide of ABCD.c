#include<stdio.h>
int main()
{
	int i,j,sp;
	for(i=1,sp=1;i<=7;i++)
	{
		for(j=65;j<=72-i;j++)
		{
			printf("%c",j);
		}
		if(i==1)
		{
			for(j=71-i;j>=65;j--)
			{
				printf("%c",j);
			}
			
		}
		else
		{
			for(j=1;j<=sp;j++)
			{
				printf(" ");
			}
			
			for(j=72-i;j>=65;j--)
			{
				printf("%c",j);
			
			}
			sp=sp+2;
		}
		
		
		
		
		printf("\n");	
	}
}
