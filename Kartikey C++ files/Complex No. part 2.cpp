//operator overloading

#include<iostream>
using namespace std;
class complex
{
	int real,img;
	public: 
	void getdata(){
		cout<<"Enter real and Img part of Complex No: ";
		cin>>real>>img;
	}
	void showdata()
	{
		cout<<"Given complex No is: "<<endl;
		cout<<real<<"+"<<img<<"i"<<endl;
			}
	
	complex operator +(complex x) //operator overloading
	{
		complex z;
		z.real = real + x.real;
		z.img= img +  x.img;
		return z;	
	}
	
//	complex add(complex x,complex y)
//	{
//		complex z;
//		real= x.real+ y.real;
//		img=  x.img + y.img;
//		
//	}
	
};


int main()
{	
		complex c1,c2,c3;
		c1.getdata();
		c2.getdata();
		
		c3=c1 + c2;
		
		c1.showdata();
		c2.showdata();
		c3.showdata();
		return 0;
}
