#include<iostream>
using namespace std;
class complex{
	int real,img;
	public: 
	void getdata(int real,int img)
	{
		this->real=real;
		this->img=img;
	}
	void showdata()
	{
		cout<<real<<" + "<<img<<"i";
	}
};
int main()
{
	complex c1,*p;
	p=&c1;
	c1.getdata(5,10);
	p->showdata();
	
	return 0;
}
