
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
class B{
	protected: 
	int b;
	public :
		B(int y)
		{
			b=y;
			cout<<"\nConstructor b is invoked"<<b;
		}
		~B()
		{
			cout<<"\nDestructor b is invoked";
		}
};
class C:public A,public B{
	int c;
	public: 
	C(int x,int y): A(x),B(y)
	{
		c=a+b;
		cout<<"\nConstructor C invoked"<<c;
	}
	~C(){
	cout<<"\nDestructir C i invoked";
	
	}
}; 
int main()
{
	C c(15,10);
	cout<<"\nProgram is over";
	return 0;
	
}
