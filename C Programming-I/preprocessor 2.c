
/* #ifdef or #ifndef*/
#include<stdio.h>

//#define pi 3.14
int main()
{
	
	float r,area,pi;
	printf("ENter Radius: ");
	scanf("%f",&r);
	
	#ifdef pi
		area=pi*r*r;
	#endif
	
	#ifndef pi
	printf("Enter pi: ");
	scanf("%f",&pi);
	area=pi*r*r;
	#endif
	
	printf("AREA = %f hehe",area);
	return 0;
}
