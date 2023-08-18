#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int i=1,sum=0,n;
	while(argv[i])
	{
		n=atoi(argv[i]);//atoi() function converts string data type into int data type.
		sum=sum+n;
		i++;
	}
	
	printf("\nsum=%d",sum);
	return 0;

}
