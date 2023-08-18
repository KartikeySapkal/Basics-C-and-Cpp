#include<stdio.h>
int main()
{ 
    char a;
    printf("Enter any character =");
    scanf("%c",&a);
    
   if(a>=65 && a<=90 || a>=97 && a<=122)
	printf(" You have blessed with an AlpHaBeT");
 else if(a>=48 && a<=57)
	printf("Omgg its is DiGiT");
	else 
	printf("its an special character ooops");
	return 0;
	
		    	
	
	
}
