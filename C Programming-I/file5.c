#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	FILE*fp;
	char line[100];
	fp=fopen("file4.c","r");
	
	if(fp==NULL){
		printf("Error opening file ;)");
		exit(1);
	}
	while(fgets(line,99,fp)!=NULL){
		printf("%s",line);
	}
	
	fclose(fp);
	
	return 0;
	}
