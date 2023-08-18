#include<stdio.h>
int main()
{
	int iArr[3]={1,4,9};
	int *iPtr=iArr;
	int i;
	
	for(i=0;i<3;i++)
	{
		printf("iArr[%d]=%d\n",i,*(iPtr+i));
	}
	
	return 0;
}
