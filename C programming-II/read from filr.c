#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE*fp;
	int num;
	fp=fopen("file1.txt","r");
	
	if(fp==NULL){
		printf("Error opening file");
		exit(1);
	}
	
	fscanf(fp,"%d",&num);
	printf("Value of num=%d",num);
	
	fclose(fp);
	return 0;	
}



