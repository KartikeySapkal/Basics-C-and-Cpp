#include<iostream>
#include<conio.h>
using namespace std;
class base{
	public: 
	void show()
	{
		cout<<"This is base class";
		
	}
};
class derived : public base{
	public : 
	void show()
	{
		cout<<"This is derived class";
		
	}
};
int main()
{
	derived d1;
	d1.show();
	getch();
	return 0;
	
}
