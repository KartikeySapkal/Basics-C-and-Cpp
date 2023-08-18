//constructor and destructor in single inheritance
#include<iostream>
using namespace std;
class A{
	public: 
	A()
	{
		cout<<"\nConstructor A is invoked";
	}
	~A()
	{
		cout<<"\nDestructor A is invoked";
	}
	
};
class B:public A{
	public: 
	B()
	{
		cout<<"\nConstructor B is invoked";
	}
	~B()
	{
		cout<<"\nDestructor B is invoked";
	}
};

int main()
{
	B b1;
	
	cout<<"\nProgram is over :) ";
	
	return 0;
}
