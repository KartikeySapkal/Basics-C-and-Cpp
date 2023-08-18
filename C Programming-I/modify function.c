#include<stdio.h>
void modify(int*,int*);
int main()
{
	int a,b;

	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	modify(&a,&b);
	printf("a=%d,b=%d\n",a,b);
	return 0;
}
void modify(int *x,int *y)
{
	*x=*x * *x;
	*y=*y * *y;
	printf("x=%d,y=%d\n",*x,*y);	
}
