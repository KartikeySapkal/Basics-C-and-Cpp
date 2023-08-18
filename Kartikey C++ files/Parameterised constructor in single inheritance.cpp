//parameterised constructor in single inheritance
#include<iostream>
using namespace std;
class A{
	protected: 
	int a;
	public :
		A(int x)
		{
			a=x;
			cout<<"\nConstructor A is invoked"<<a;
		}
		~A()
		{
			cout<<"\nDestructor A is invoked";
		}
};
class B:public A{
	protected: 
	int b;
	public: 
	B(int x): A(x)  //constructor chaining
	{
		b=x;
		cout<<"\nConstructor B is invoked "<<b;
		
	}
	~B(){
		cout<<"\nDestructor B is invoked";
	}
};
int main()
{
	B b1(12);
	cout<<"\nProgram is OVER :)";
	return 0;
	}	
