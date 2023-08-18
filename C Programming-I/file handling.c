//programm to write int values in files
#include<stdio.h>
#include<stdlib.h> //include this file to use exit function
int main()
{
	FILE *fp; //file is structure *fp is pointer 
	int num;
	
	fp=fopen("file1.txt","a");
	if(fp==NULL)
	{
		printf("Error opening file");
		exit(1);
	}
	
	printf("Enter any number: ");
	scanf("%d",&num);
	
	fprintf(fp,"%d",num);
	
	fclose(fp);
	
	return 0;
}
