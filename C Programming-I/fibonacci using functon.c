#include<stdio.h>
int fibo(int);
int main()
{
	int limit,i;
	printf("Enter the limit for fibonacci: ");
	scanf("%d",&limit);
	
	printf("fibonacci for givenm limit is: ");
	for(i=0;i<limit;i++)
	printf("%d\n",fibo(i));

return 0;

}
int fibo(int x){

int i,n1,n2,sum=0;
if(x==0)
 return 0;
if(x==1)
 return 1;
else 
for(i=2;i<x;i++)
 {
 sum=n1+n2;
  n1=n2;
 n2=sum;	
 return sum;
}
}
