#include<stdio.h>
struct date{
	int day;
	int month;
	int year;
};
struct date input();
void output(struct date);
int compare(struct date,struct date);
int main()
{
	struct date d1,d2;
	printf("Enter date 1: ");
	d1=input();
	printf("\nEnter date 2: ");
	d2=input();
	
	printf("\nDate 1: ");
	output(d1);
	printf("Date 2: ");
	output(d2);
	
	compare(d1,d2);
	
	
	return 0;
}
struct date input(){
	
	struct date d;
	printf("ENter day: ");
	scanf("%d",&d.day);
	
	printf("ENter month: ");
	scanf("%d",&d.month);
	
	printf("ENter year: ");
	scanf("%d",&d.year);
	
	return d;
}

void output(struct date d){
	
	
	printf("%d-%d-%d\n",d.day,d.month,d.year);
	
}

int compare(struct date a,struct date b){
	
	if(a.day==b.day && a.month==b.month && a.year==b.year){
		
		printf("Thats the same Day");
	}
	else 
	printf("Different Days");
}
