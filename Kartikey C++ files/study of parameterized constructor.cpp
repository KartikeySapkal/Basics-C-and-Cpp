//copoy constructor: 
/* When a constructor intializes an object using the another object of same class 
Its called copy constructor */
#include<iostream>
using namespace std; class complex{int real,img;public: complex()	{real=img=0;cout<<"Default constructor called \n";	}	complex(int r,int i)	{		real=r;img=i;cout<<"Parameterized constructor called \n";}	complex(complex &x)/*COPY CONSTRUCTOR*/ 	{real=x.real;img=x.img;cout<<"copy constructor called \n";}void show(){cout<<real<<"+"<<img<<"i"<<endl;}};int main(){complex c1;c1.show();complex c2(5,10);c2.show();complex c3=c2;c3.show();return 0;}
