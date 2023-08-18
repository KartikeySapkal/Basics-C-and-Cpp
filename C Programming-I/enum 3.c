#include<stdio.h>
#include<conio.h>
typedef enum bool{
	false,true
}bool;

typedef struct date{
	int d;int m;int y;
}date;

bool compare(date,date);
date input();

int main(){
	
	date d1,d2;
	bool status;
	
	d1=input();
	d2=input();
	if(compare(d1,d2)==true)
		printf("both dates are same");
	else
		printf("Both days are not same");
	getch();
	return 0;
	
}
date input(){
	
	date d;
	printf("Enter day : ");
	scanf("%d",&d.d);
	printf("Enter month : ");
	scanf("%d",&d.m);
	printf("Enter year : ");
	scanf("%d",&d.y);
	

	return d;
}
bool compare(date d1,date d2)
{
	if(d1.d==d2.d && d1.m==d2.m && d1.y==d2.y)
		return true;
	else 
		return false;	
}
