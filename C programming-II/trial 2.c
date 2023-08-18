//TRIAL
#include<stdio.h>
#include<string.h>
int main()
{
	int a=5;
	char b='?';
	
	int *p1;
	p1=&a;
	
	char *p2;
	p2=&b;
	
	printf("\n Adress of a=%x",&a);
	printf("\n Adress of a=%x",p1);
	
	printf("\n Adress of b=%x",&b);
	printf("\n Adress of b=%x",p2);	
	
	printf("\n size of pointer =%d bytes",sizeof(p1));
	getch();

	
	return 0;
}
