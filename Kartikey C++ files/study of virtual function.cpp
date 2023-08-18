//use of virtual function to solve problem in base class pointer
#include<iostream>
#include<conio.h>
using namespace std;
class base{
	public: 
	virtual	void show()
	{
		cout<<"This is base class : ";
	}
};
class derived:public base{
	public: 
		void show()
	{
		cout<<"This is derived class : ";
	}
	
};


int main()
{
	base *p;
	derived d1;
	p=&d1; //base class pointer is pointing to object of derived class
	p->show(); //instead of calling function of derived classes,it will call function of base class	
	
	return 0;
}
