#include<stdio.h>
int cmp(int,int,int);
int main()
{
	int a,b,c,largest;
	printf("Enter three numbers: ");
	scanf("%d %d %d",&a,&b,&c);
	
	largest=cmp(a,b,c);
	printf("Largest of three numbers is: %d",largest);
	
	
	return 0;
}
int cmp(int x,int y,int z)
{
	
if(x>y)
{
	if(x>z)
	
	return x;
	else
	return z;
}
	
	else
	{
		if(y>z)
		return y;
		else
		return z;
		
		
	}
}
