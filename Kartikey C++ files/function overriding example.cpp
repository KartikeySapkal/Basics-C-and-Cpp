#include<iostream>
#include<conio.h>
using namespace std;
class shape{
	protected :
		int height,width;
	public: 
	void read()
	{
		cout<<"\nEnter Height And Width: ";
		cin>>height>>width;
		
		}
	void show()
	{
		cout<<"\nCalling from Base : ";
		cout<<"\n\tHeight= "<<height;
		cout<<"\n\tWidth= "<<width;
			}		
};
class rectangle: public shape{
	int a;
	public: 
	void show(){
		cout<<"\n\tCalling from Derived";
		cout<<"\n\tArea= "<<height*width<<endl;
		
	}
};

int main()
{
	
	shape s1;
	cout<<"\tFor shape s1 ";
	s1.read();
	s1.show(); //show() function of base class is being called
	
	cout<<"\n----------------------------------------------------";
	cout<<"\n\tFor rectangle r1 ";
	rectangle r1;
	
	r1.read();
	r1.show(); //show() function from derived class will be called
	
	getch();
	return 0;
}
