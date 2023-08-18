#include<iostream>
using namespace std;
int main()
{
	int *p=NULL;
	p=new int;
	*p=5;
	cout<<"*p= "<<*p;
	delete p; //Free the allocated memory
	cout<<"\n*p= "<<*p;
}
