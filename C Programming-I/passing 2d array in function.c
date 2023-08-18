#include<stdio.h>
void upper(char[][20]);
int main()
{
	char name[3][20]={"tina","isha","chaitali"};
	int i;
	upper(name);
	printf("upper case names are:\n");
	
	for(i=0;i<3;i++)
	{
		printf("%s\n",name[i]);
		
	}
	return 0;
}
void upper(char a[][20])
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;a[i][j]!='\0';j++)
	
	{
		if(a[i][j]>=97 && a[i][j]<=122)
		a[i][j]=a[i][j]-32;
	}
	}
}

	
