//2 dimentional array
//programm to calculate total of 3 subjects of 4 students
#include<stdio.h>
int main()
{
	int marks[4][3];
	int i,j,sum;
	
	for(i=0;i<4;i++)
	{
		printf("for students %d enter marks: \n",i+1);
		for(j=0;j<3;j++)
		{
			printf("Sub %d= ",j+1);
			scanf("%d",&marks[i][j]);
		}	
	}
	
	for(i=0;i<4;i++)
	{
		sum=0;
		
		for(j=0;j<3;j++)
		{
			sum=sum+marks[i][j];
		}
	printf("\n Total marks of students %d=%d",i+1,sum);
	} 
	return 0;
}
