#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE*fp;
	char a[20];	
	fp=fopen("file2.txt","r");
	
	if(fp==NULL){
		printf("Error opening file");	
		exit(1);
	}
	
	fgets(a,19,fp);
	printf("%s",a);
	fclose(fp);
	
	return 0;
}
