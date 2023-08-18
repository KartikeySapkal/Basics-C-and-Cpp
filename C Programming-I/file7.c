#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE*fp1,*fp2;
	char ch;
	
	fp1=fopen("file4.c","r");	
	if(fp1==NULL){
		printf("Error opening file ");
		exit(1);
	}
	
	fp2=fopen("file10.txt","w");
	if(fp2==NULL){
		printf("Error opening file ");
		fclose(fp1);
		exit(2);
	}
	
	while(1){
		ch=fgetc(fp1);
		if(ch==EOF){
			break;
		}
		fputc(ch,fp2);
	}
	
	
	
	
	fclose(fp1);
	fclose(fp2);
	
	return 0;
}
