#include<stdio.h>
struct student{
	int roll_no;
	char name[20];
	float percent;
};
int main()
{
	struct student s1,s2,s3;
	printf("enter information of student s1\n");
	printf("enter roll _no of s1=");
	scanf("%d",&s1.roll_no);
	
	printf("enter name s1=");
	scanf("%s",s1.name);
	
	printf("enter percentage of s1=");
	scanf("%f",&s1.percent);
	
	
	printf("enter information of student s2=\n");
	printf("enter roll _no of s2");
	scanf("%d",&s2.roll_no);
	
	printf("enter name s2=");
	scanf("%s",s2.name);
	
	printf("enter percentage of s2=");
	scanf("%f",&s2.percent);
	s3=s2;
	
	printf("roll_no        name          percentage\n");
	printf("%d             %s            %.2f\n",s2.roll_no,s2.name,s2.percent);
	
	printf("roll_no       name          percentage\n");
	printf("%d             %s           %.2f\n",s1.roll_no,s1.name,s1.percent);

	printf("roll_no       name          percentage\n");
	printf("%d             %s           %.2f\n",s3.roll_no,s3.name,s3.percent);
	
	return 0;
}
