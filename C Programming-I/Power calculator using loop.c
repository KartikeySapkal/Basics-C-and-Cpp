#include<stdio.h>
int main()
{
	int i,x,y,value=1;
	
printf("Enter number: ");
scanf("%d",&x);

printf("Enter power: ");
scanf("%d",&y);


for(i=1;i<=y;i++)
{

    value=value*x;
	
}

     printf("Value = %d",value);
	 return 0;	
}
