#include<stdio.h>
struct student{

int day;
int month;
int year;
};

int main()
{
	struct student a;
	printf("Enter day: ");
	scanf("%d",&a.day);
	
	printf("Enter month: ");
	scanf("%d",&a.month);
	
	printf("Enter year: ");
	scanf("%d",&a.year);
	
	if((a.day>31 || a.day<=1)||(a.month>12 || a.month<=1)){
		printf("WRONG DATE HEHE:)");
		}
	else
	printf("%d-%d-%d",a.day,a.month,a.year);
	
	return 0;
}
