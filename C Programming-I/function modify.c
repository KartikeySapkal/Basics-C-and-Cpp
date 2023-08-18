#include<stdio.h>
void modify(int);
int main()
{
	int a;
	printf("Enter number: \n");
	scanf("%d",&a);
	modify(a);
	printf("a=%d\n",a);
	return 0;
}
 void modify(int x){
	x=x*x;
	printf("x=%d\n",x);
}
