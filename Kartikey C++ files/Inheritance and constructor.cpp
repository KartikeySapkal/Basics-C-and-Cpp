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
class B{
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
class C:public B,public A{
	public: 
	C()
	{
		cout<<"\nConstructor C is invoked";
	}
	~C()
	{
		cout<<"\nDestructor C is invoked";
	}
	
};


int main()
{
	C c1;
	
	cout<<"\nProgram is over :) ";
	
	return 0;
}
