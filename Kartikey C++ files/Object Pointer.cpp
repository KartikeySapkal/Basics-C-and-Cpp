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
};
int main()
{
	complex c1,*p;
	p=&c1;
	p->getdata();
	p->showdata();
	
	return 0;
}
