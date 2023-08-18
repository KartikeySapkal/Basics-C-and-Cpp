#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("enter three numbers");
	scanf("%d%d%d",&a,&b,&c); 
	
	max=a;
	
	if(b>max)
	 max=b;
	 
    if(c>max);
	 max=c; 
	printf("largest=%d",max);
	
	getch();
	return 0;
		
}
