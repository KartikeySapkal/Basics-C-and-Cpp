#include<iostream>
using namespace std;
class shape{
	protected : 
	int height,width;
	public: 
	void read()
	{
		cout<<"\nEnter height and width: ";
		cin>>height>>width;
		
	}
	virtual void show()
	{
		cout<<"\n\tCalling from Base: ";
		cout<<"\n\theight= "<<height;
		cout<<"\n\twidth= "<<width<<endl;
	}
	
};

class rectangle:public shape{
	int a;
	public: 
	void show()
	{
		cout<<"\n\tCalling from derived";
		cout<<"\n\tArea= "<<height*width<<endl;
	}
};

int main()
{
	shape s1,*p;
	p=&s1;
	cout<<"\tFor shape s1";
	p->read();
	p->show(); //show() function of base class will called
	cout<<"\n---------------------------------------";
	cout<<"\n\tFor rectangle r1";
	rectangle r1;
	p=&r1;
	p->read();
	p->show(); //show() function from derived class willbe called
	
	return 0;	
}
