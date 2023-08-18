#include<stdio.h>
int main()
{   
int choice;
	printf("area menu");
	printf("\n1.Circle");
	printf("\n2.Triangel");
	printf("\n3.rectangle");
	printf("\n4.square");

	printf("\nEnter no. of choice:\n(For example for square press '4')\n");
	scanf("%d",&choice);	
	
	
	switch(choice)
	{  float rad,cir,base,hei,tri;
		case 1:printf("circle");
		printf("Enter radius of circle:");
			   scanf("%f",&rad);
		cir=3.14*rad*rad;
		printf("Area of circle is: %f",cir);
		break;
		case 2:printf("Triangle");
		printf("\nEnter base and height of triangle:");
			   scanf("%f %f",&base,&hei);
			   tri=0.5*base*hei;
		printf("Area of triangle is: %f",tri);
		break;
		
		
		case 3:printf("rectangle");
		printf("\nEnter base and height of rectangle:");
			   scanf("%f %f",&base,&hei);
			   tri=base*hei;
		printf("Area of rectangle is: %f",tri);
		break;
		case 4:printf("square");
		printf("\nEnter side of square:");
			   scanf("%f",&base);
			   tri=base*base;
		printf("Area of square is: %f",tri);
		break;
		
		default:printf("Invalid input heheh");
		
		
		
	}
	
	
	
	return 0;
}
