#include<stdio.h>
void swap(int*,int*);
int main()
{
	int a,b;
	printf("Enter two variables: ");
	scanf("%d %d",&a,&b);
	printf("Before Swapping: ");
	printf("a=%d,b=%d",a,b);
	swap(&a,&b);
	printf("\nAfter swapping: ");
	printf("a=%d,b=%d",a,b);

	return 0;
}
void swap(int*x,int*y){
	
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
