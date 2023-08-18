#include<stdio.h>
int main()
{
	int a,b,r;
	char c;
	float div;
	printf("Enter num1: ");
	scanf("%d",&a);
	printf("Enter num2: ");
	scanf("%d",&b);
	
	printf("Choose operation from following");
	printf("+,-,*,/,% : ");
	scanf(" %c",&c);
	
	switch(c)
	{
	case '+':printf("%d + %d=%d",a,b,a+b);
			break;
	case '-':printf("%d - %d=%d",a,b,a-b);
			break;
	case '*':printf("%d * %d=%d",a,b,a*b);
			break;
	case '%':printf("%d mod %d=%d",a,b,a%b);
			break;
	case '/': div=(float)a/b;
			printf("%d / %d =%f",a,b,div);
    		break;
    default:
    	printf("invalid operator");
	}	
		
	return 0;	
}













