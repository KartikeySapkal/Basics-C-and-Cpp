#include<stdio.h>
int main()
{
	int i,num;
	char choice;
	do{
		printf("Enter any number: ");
		scanf("%d",&num);
		for(i=2;i<=num;i++)
		{
			if(num%i==0)
				break;
		}
		if(num==i)
			printf("Given number is prime\n");
		else
			printf("Given number is not prime\n");
			
		printf("do you want to check another number (y/n)");
		scanf(" %c",&choice);		
	  }while(choice=='y'||'Y');
	

	return 0;
}

