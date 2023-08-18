#include<stdio.h>
#include<stdlib.h>
struct zencom 
{ 
    char name[50]; 
    char course[50]; 
    float batch; 
}s;   

int main() 
{ 
    int n, i;  
   FILE *fp;  

    fp = fopen("student.dat", "rb"); 
    if(fp == NULL) 
    { 
        printf("Error opening file\n"); 
        exit(1); 
    }  
printf("Reading structure from file using fread() function: \n\n");

while(fread(&s,sizeof(s),1,fp)==1)
{
	printf("Name: %s\n",s.name);
	printf("course: %s \n",s.course);
	printf("Batch timing: %f \n\n",s.batch);
	
}
fclose(fp);
getch();

return 0;

}

