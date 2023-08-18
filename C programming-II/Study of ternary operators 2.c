#include<stdio.h>
//study of ternery operator2
int main()
{ 
float n,d;


printf("Enter numerator");
scanf("%f",&n);


printf("Enter denominator");
scanf("%f",&d);

d>0?printf("Divison=%0.2f",n/d):printf("Division not possible");


getch(); 
return 0;

}
