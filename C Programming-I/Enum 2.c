#include<stdio.h>
#include<string.h>
#include<conio.h>
typedef enum dept{
	CS,IT,ENTC
} branch;

typedef struct student{
	
	char name[20];
	branch department;
}student;
int main()
{
	student s;
	strcpy(s.name,"Richie");
	printf("Enter Branch: ");
	gets();
	
	printf("\n%s got admission in ",s.name);
	
	if(s.department==CS)
	printf("\n CS na Bhaii");
	
	else if(s.department==IT)
	printf("IT na BHAII :)");
	
	else if(s.department==ENTC)
	printf("ENTC hehe");
	
	else 
	printf("MEDICAL COLLEGE ALLOTED");
	
	
	
	getch();
	return 0;
}
