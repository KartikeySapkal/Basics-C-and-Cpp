#include<stdio.h>
int main()
{
//study of bitwise operator
int a=10,b=15,c;
printf("a=%d\tb=%d",a,b);

c=a&b;//bitwise AND
printf("\n\n a AND b=%d",c);


c=a|b;//bitwise OR
printf("\n\n a OR b=%d",c);


c=a^b;//bitwise XOR
printf("\n\n a XOR b=%d",c);

c=a<<1;//left shift by 1 bit
printf("\n\na<<1=%d",c);

c=a<<2;//left shift by 2 bit
printf("\n\na<<2=%d",c);

c=a>>1;//rightshift by 1 bit
printf("\n\na>>1=%d",c);

c=a>>2;//right shift by 2 bit
printf("\n\na>>2=%d",c);



getch();	
return 0;	
}
