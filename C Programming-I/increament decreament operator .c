#include<stdio.h>
int main()
{//study of prefix and postfix operator
int a,b,c;
a=10,b=15,c;   

c=a++ + ++b;   //postfix increament
printf("c=%d",c);

getch();
return 0;
}
