#include<stdio.h>
int main()
{ 
    int a;
    printf("Enter any Year =");
    scanf("%d",&a);
    
    if ((a%4==0 && a%100!=0) || (a%400==0))
    printf("Lets have a leap year party");
     
    else
	printf("Its not leap year"); 
	
	return 0;
	
}
