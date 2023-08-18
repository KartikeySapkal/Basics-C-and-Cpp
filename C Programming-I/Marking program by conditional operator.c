#include<stdio.h>
int main()
{
	int a;
	printf("Enter marks=");
	scanf("%d",&a);



if(a<0||a>100)
  printf("Marks invalid");	
else if(a>=75)
	   printf("Grade A");
else if(a>=60)
	   printf("Grade B");
else if(a>=50)
	   printf("Grade C");	
else if(a>=35)
	   printf("Grade D");	
   else
   	   printf("yOuR FaIlEd hehe");
   	   getch();
	return 0;
}
