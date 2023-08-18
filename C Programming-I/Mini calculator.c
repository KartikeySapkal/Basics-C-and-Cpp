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
	
	if(c=='+')
	{
	r=a+b;
	printf("%d+%d=%d",a,b,r);
}
	
	else if (c=='-')
	{
	r=a-b;
	printf("%d-d=%d",a,b,r);
}
	else if(c=='*')
{
		r=a*b;
	printf("%d*%d=%d",a,b,r);

}
	else if(c=='%')
{
		r=a%b;
	printf("%d  mod %d=%d",a,b,r);
	
}

	else if(c=='/')
{
	div=(float)a/b;
	printf("%d/%d=%f",a,b,div);
}

    else
    printf("Invalid operator");
	return 0;	
}
