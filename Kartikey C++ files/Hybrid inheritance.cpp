//hybrid inheritance
#include<iostream>
using namespace std;
class A{
	protected: 
	int a;
	public: 
	void getA()
	{
		cout<<"Enter the value of a: ";
		cin>>a;
		
	}
};
class B:public A{
	protected : 
	int b;
	public: 
	void getB()
	{
		cout<<"Enter the value of b: ";
		cin>>b;
		
	}
	
};
class C{
	protected: 
	int c;
	public: 
	getC()
	{
		cout<<"Enter the value of c: ";
		cin>>c;
	}
};

class D: public B,public C{
	protected: 
	int d;
	public: 
	void mul()
	{
		getA();
		getB();
		getC();
		d=a*b*c;
		cout<<"d= "<<d;
		
	}
}; 

int main()
{
	D d1;
	d1.mul();
	return 0;
}
