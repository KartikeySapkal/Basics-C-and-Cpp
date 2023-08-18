#include<stdio.h>
int main()
{//study of prefix and postfix operator
int a,b,c;
a=10,b=15,c;   

c=a++;   //postfix increament
printf("c=%d",c);
printf("\na=%d",a);

c=++b;   //prefix increament
printf("\n\nc=%d",c);
printf("\nb=%d",b);

getch();
return 0;
}
