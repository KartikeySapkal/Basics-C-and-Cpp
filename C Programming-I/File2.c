#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE*fp;
	char a[20];	
	fp=fopen("file2.txt","w");
	
	if(fp==NULL){
		printf("Error opening file");	
		exit(1);
	}
	printf("Enter the char for file : ");
	gets(a);
	
	
	fprintf(fp,"%s",a);
	fclose(fp);
	
	return 0;
}
