//study  of inheritance

#include<iostream>
using namespace std;
class base{
	protected: 
	int a,b;
	public: 
	void getdata(){
		cout<<"Enter values of a and b: ";
		cin>>a>>b;
	}
	void showdata()
	{
		cout<<"a= "<<a<<"\tb= "<<b;
		
	}
};
class derived:public base{
	public: 
	void sum()
	{
		cout<<"\na+b= "<<a+b;
	}
};

int main()
{
	base b1;
	derived d1;
	d1.getdata();
	d1.showdata();
	d1.sum();
	
	return 0;
}
