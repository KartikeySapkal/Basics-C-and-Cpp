//Getting adress of object using 'this' pointer
#include<iostream>
using namespace std;
class complex{
	int real,img;
	public: 
	void getdata()
	{
		cout<<"Enter Real and Img Part: ";
		cin>>real>>img;
	}
	void showdata()
	{
		cout<<real<<"+"<<img<<"i";
	}
	complex* getAdress()
	{
		return this;
	}
};
int main()
{
	complex c1,*p;
	p=&c1;
	c1.getdata();
	c1.showdata();
	cout<<"\nAddress of c1: "<<p;
	cout<<"\nAddress of c1: "<<c1.getAdress();
	return 0;
}
