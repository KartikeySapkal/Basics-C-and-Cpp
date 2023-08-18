#include<iostream>
using namespace std;
int main()
{
	int *p=new int(10); //memory intialising
	cout<<"*p= "<<*p;
	delete p; //Free the allocated memory
	cout<<"\n*p= "<<*p;
}
