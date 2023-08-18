//Ambiguities in multipath inheritance
#include<iostream>
using namespace std;
class A{
	protected:
		int a;
		
};
class B: virtual public A{
	protected: 
	int b;
};
class C : virtual public A{
	protected: 
	int c;
	
};
class D: public B,public C{
	int d;
	public : 
	void get(){
		cout<<"Enter a= ";
		cin>>a;
		cout<<"Enter b= ";
		cin>>b;
		cout<<"Enter c= ";
		cin>>c;
	}
	void show()
	{
		d=a+b+c;
		cout<<"d= "<<d;
	}
};
int main()
{
	D temp;
	temp.get();
	temp.show();
	return 0;
}
