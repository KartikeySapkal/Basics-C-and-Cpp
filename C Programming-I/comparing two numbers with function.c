#include<stdio.h>
void cmp(int,int,int);

int main()
{
	int a,b,c;
	printf("Enter three numbers: \n");
	scanf("%d%d%d",&a,&b,&c);
	printf("a=%d,b=%d,c=%d\n",a,b,c);
	cmp(a,b,c);
	return 0;
}
void cmp(int x,int y,int z){
	
	if(x>y)
	{
		if(x>z)
			printf("%d is greater",x);
		else
			printf("%d is greater",z);	
		
	}
	else
	{
		if(y>z)
			printf("%d is greater",y);
		else
		printf("%d is greater",z);	
		
	}

}
