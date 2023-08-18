#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	FILE*fp;
	char line[200];	
	fp=fopen("file2.txt","w");
	
	if(fp==NULL){
		printf("Error opening file");	
		exit(1);
	}
	printf("Enter lines of poem: \n");
	while(strlen(gets(line))>0)
	{
		fputs(line,fp);
		fputs("\n",fp);
	}
	
	fclose(fp);
	return 0;
}
