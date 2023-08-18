#include<stdio.h>
#define DIV(a,b) (b==0? printf("Denominator is zero"):printf("div=%f",a/b))

int main(){
	
	float n,d;
	printf("ENter numerator: ");
	scanf("%f",&n);
	
	printf("Enter denominator: ");
	scanf("%f",&d);
	
	DIV(n,d);
	
	return 0;
}
