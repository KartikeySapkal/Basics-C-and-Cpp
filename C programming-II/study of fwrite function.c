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

    fp = fopen("student.dat", "wb"); 
    if(fp == NULL) 
    { 
        printf("Error opening file\n"); 
        exit(1); 
    }  

    printf("Writing structure to file using fwrite() function: \n\n");  

    printf("Enter the number of students you want to enter: "); 
    scanf("%d", &n); 
    for(i = 0; i < n; i++) 
    { 
        printf("\nEnter details of student %d \n", i + 1); 
        fflush(stdin); 
        printf("Name: "); 
        gets(s.name);  

        printf("Course: "); 
        gets(s.course);   

        printf("Batch timing: "); 
        scanf("%f", &s.batch);  
        fwrite(&s, sizeof(s), 1, fp);
    } 

    fclose(fp); 
    
    return 0;
}
