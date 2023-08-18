//Base class pointer: 
//it can point object of base class as well as object of derived class
#include<iostream>
#include<conio.h>
using namespace std;
class base{
	public: 
	void show()
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
	base b1,*p;
	p=&b1; //base class pointer is pointing to base class object
	
	derived d1;
	p=&d1; //base class pointer is pointing to object of derived class
	
	getch();	
	return 0;

}
