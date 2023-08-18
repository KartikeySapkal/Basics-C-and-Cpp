#include<stdio.h>

void rectangle(float,float);
void circle(float);
void triangle(float,float);

int main()
{
	int choice;
	float radius,length,breadth,height,base;
	printf("1.circle\n2.rectangle\n3.triangle\n");
	printf("\nSelect no. of operation: ");
	scanf("%d",&choice);

	if(choice==1){
	printf("\nEnter radius of circle: ");
	scanf("%f",&radius);
	circle(radius);}
		
	else if(choice==2){
	printf("\nENter length and breadth of rectangle: ");
	scanf("%f %f",&length,&breadth);
	rectangle(length,breadth);}
	
	else if(choice==3){
	printf("\nENter height and base of triangle: ");
	scanf("%f %f",&height,&base);		
	triangle(height,base);}
	
	else
	printf("Invalid choice\n");
	return 0;
}

void circle(float x){
	float a;
	a=x*x*3.14;
	printf("\narea of circle is %f",a);}

void rectangle(float x,float y){
	float z;
	z=x*y;
	printf("\narea of rectangle is %f",z);}

void triangle(float x,float y){
	float z;
	z=0.5*x*y;
	printf("\narea of triangle is %f",z);}
	
