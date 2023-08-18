#include<stdio.h>
void upper(char[][20]);
int main()
{
int a=5;
int *ptr1,**ptr2;

ptr1=&a;
ptr2=&ptr1;

printf("&a=%x",&a);
printf("\nptr1=%x",ptr1);
printf("\n\nptr1=%x",&ptr1);

printf("\nptr=%x",ptr2);
printf("\n\n*ptr1=%x",*ptr1);
printf("\n\n**ptr2=%x",**ptr2);

return 0;
}
