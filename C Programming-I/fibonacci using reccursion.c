#include<stdio.h>
int fibo(int);
int main()
{
	int limit,i;
	printf("Enter the limit for fibonacci:  ");
    scanf("%d",&limit);
    
    printf("\n fibonacci series is:\n");
    for(i=0;i<limit;i++)
    {
    	printf("%d\n",fibo(i));
	}
	return 0;
    
}
int fibo(int n){
	
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
		
	else
	return (fibo(n-1)+fibo(n-2));
			
			
}

