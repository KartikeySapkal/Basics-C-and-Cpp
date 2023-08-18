#include<stdio.h>
#include<string.h>
typedef struct book{
	char title[30];
	float price;
	int pages;
}book;
int main()
{
	book b1;
	strcpy(b1.title,"The Secret");printf("book name=%s\n",b1.title);	
	b1.pages=300;printf("book pages=%d\n",b1.pages);
	b1.price=400.00;	printf("book price=%f\n",b1.price);
	
	printf("\nSize of b1=%d bytes",sizeof(b1));

	

	return 0;

}
