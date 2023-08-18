#include<iostream>
using namespace std;
class complex{
	private:
		int real,img;
	public:
		complex() //default constructor
		{
		real=img=0;
		cout<<"default constructor called"<<endl;
		}	
	complex(int x,int y)  //parameterized constructor
	{
		real=x,img=y;
		cout<<"Parameterized constructor called"<<endl;
	}
	complex(complex &x){
		real=x.real;
		img=x.img;
		cout<<"Copy constructor called"<<endl;
	}
	
	void add(complex x,complex y)
	{
		real=x.real+y.real;
		img=y.img+x.img;
	}
	
	void show()
	{
		cout<<real<<"+"<<img<<"i"<<endl;
	}	
};
int main()
{
	complex c1,c2(5,10),c3,c4;
	c3.add(c1,c2);
	c4=c1;
	c1.show();
	c2.show();
	c3.show();
	c4.show();
	return 0;
}
