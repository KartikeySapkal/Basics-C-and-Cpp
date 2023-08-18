#include<stdio.h>
#include<string.h>
int main()
{
	char day[7][10]={"Sunday",
					 "Monday",
					 "Tuesday",
					 "Wednesday",
					 "Thursday",
					 "Friday",
					 "Saturday"	
					};
	
	int i;
	//printf("Enter no of weekdays: ");
	//scanf("%d",&i);
	for(i=0;i<3;i++)
	printf("%c",day[0][i]);
	
	
	
//	printf("%s",day[i-1]);
	return 0;
	
}
