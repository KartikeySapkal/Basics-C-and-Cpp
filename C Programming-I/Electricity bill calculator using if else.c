#include<stdio.h>
int main()
{
	float bill,unit;
	
	printf("Enter no of units:");
	scanf("%f",&unit);
		
		
	if(unit<=30)
	 bill=unit*0.75;		
	else if(unit<=100)
	  bill=(30*0.75)+((unit-30)*1);
	else if(unit<=200)
	  bill=(30*0.75)+(70*1)+((unit-100)*2);	
	else 
	 bill=(30*0.75)+(70*1)+(100*2)+((unit-200)*3);  
				
	
	printf("Your bill is %.2f (0 __ 0) heheh",bill);
	
	return 0;
	}
	


