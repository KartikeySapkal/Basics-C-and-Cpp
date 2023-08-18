//programm to copy content of one file to another file from command line
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argv[])
{
	FILE *fp1,*fp2;
	char ch;
	
	if(argc!=3)
	{
		puts("Arguments are not proper: ");
		exit(1);
	}
	
	fp1=fopen(argv[1],"r");
	if(fp1==NULL)
	{
		printf("Error opening source file");
		exit(2);
	}
	fp2=fopen(argv[2],"w");
	if(fp2==NULL)
	{
		printf("Error opening target file");
		fclose(fp1);
		exit(3);
	}
	
	while(1)
	{
		ch=fgetc(fp1);
		if(ch==EOF)
		break;
		fputc(ch,fp2);
	}
	
	fclose(fp1);
	fclose(fp2);
	return 0;
}
