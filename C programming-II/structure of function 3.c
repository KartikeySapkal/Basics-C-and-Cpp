#include<stdio.h>
#include<conio.h>
struct student{
	int roll_no;
	char name[20];
	float per;
};

struct student input();
void output (struct student);

int main()
{
	struct student s[3];
int i;
	for(i=0;i<3;i++)
	{
		s[i]=input();
	}

	printf("\n\nroll_no\tname\tpercentage\n");
	for(i=0;i<3;i++)
	{
		output(s[i]);
	}

	getch();
	return 0;
}
struct student input()
{
	struct student s;
	
	printf("roll_no=");
	scanf("%d",&s.roll_no);
	
	getchar();
	
	printf("name=");
	scanf("%s",s.name);
	
	printf("per=");
	scanf("%f",&s.per);
	
return s;
	
}
void output (struct student s)
{
	printf("%d\t%s\t%.2f\n",s.roll_no,s.name,s.per);
}
