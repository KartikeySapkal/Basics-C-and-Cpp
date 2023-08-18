//programm to read string by character in file.

#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE*fp;
	char ch;
	fp=fopen("file4.c","r");
	
	if(fp==NULL){
		printf("Error opening file ;)");
		exit(1);
	}
	while(1){
		
		ch=fgetc(fp);
		
		if(ch==EOF){	//EOF means END OF FILE mhnje file cha end la aslela character
						//to character fclose(fp) add karto
						//character khupch mc he
		
			break;
		}
		if(ch>97 && ch<122){
				ch=ch-32;
			}
		printf("%c",ch);
	}
	
	return 0;
}
