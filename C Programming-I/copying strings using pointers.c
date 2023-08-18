//copy string using pointer
#include<stdio.h>
int main()
{
	char a[20],b[20];
	printf("Enter any name: ");
	gets(a);
	printf("Enter any name: ");
	gets(b);
	char *aptr,*bptr;
	aptr=a;
	bptr=b;
	while(*bptr)
	{
		bptr++;
	}
	for( ;*aptr!='\0';aptr++,bptr++)
	{
		*bptr=*aptr;
	}
	
	*bptr='\0';
	
	printf("B=%s",b);
	
	return 0;
}
