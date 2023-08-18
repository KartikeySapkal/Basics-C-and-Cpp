/*Enum
enum is user defined data type,It is used to assign names to integers.
enum makes programs more readable*/


#include<stdio.h>
enum week{
	sun=10,mon,tue,wed,thur,fri,sat
};
int main()
{
	enum week today;
	today=fri;
	printf("Its day %d of week",today);
	
	return 0;
}
