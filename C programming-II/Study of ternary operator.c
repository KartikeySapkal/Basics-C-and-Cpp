#include<stdio.h>
//study of ternery operator
int main()
{ 
int num1,num2,max;

printf("Enter num1=");
scanf("%d",&num1);

printf("Enter num2=");
scanf("%d",&num2);
max=((num1>num2)?num1:num2);
printf("\n\nLargest no=%d",max);
getch(); 
return 0;

}
