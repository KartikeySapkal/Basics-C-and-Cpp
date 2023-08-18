#include<stdio.h>
void modify(int [][2]);
 int main()
 {
 	int a[2][2]={1,2,3,4};
 	int i,j;
 	printf("given of numbers:\n");
 	for(i=0;i<2;i++)
 	{
 		for(j=0;j<2;j++)
 		{
 			printf("%d\t",a[i][j]);
		 }
		 printf("\n");
	 }
 	modify(a);
 	printf("\n\nsquare of numbers:\n");
 	for(i=0;i<2;i++)
 	{
 		for(j=0;j<2;j++)
 		{
 			printf("%d\t",a[i][j]);
		 }
		 printf("\n");
	 }
 	
 	return 0;
 }
 void modify(int a[][2])
 {
 	int i,j;
 	for(i=0;i<2;i++)
 	{
 		for(j=0;j<2;j++)
 		{
 			a[i][j]=a[i][j]*a[i][j];
		 }
	 }
 }
