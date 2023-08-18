#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	FILE*fp; float f; int i;
	
	fp=fopen("new.dat","rb");
	
	if(fp==NULL){
		printf("Error opening file");	
		exit(1);
	}
	
	fread(&f,sizeof(float),1,fp);
	printf("F=%f",f);
	
	fread(&i,sizeof(int),1,fp);
	printf("\ni=%d",i);
	
	fclose(fp);
	
	return 0;
}
