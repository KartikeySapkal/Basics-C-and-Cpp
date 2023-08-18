#include<stdio.h> 
int cube(int);int main()
{	int a;	printf("Enter the side of cube: ");scanf("%d",&a);printf("Volume of cube is: %d",cube(a));return  0;}int cube(int x){return x*x*x;}
