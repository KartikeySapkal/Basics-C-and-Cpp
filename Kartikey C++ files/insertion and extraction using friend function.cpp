#include<iostream>
using namespace std;
class complex{
	int real,img;
	public:
		friend void operator>>(istream&,complex&);
		friend void operator<<(ostream&,complex&);
};
 void operator >>(istream &xin,complex &y)
 {
 	cout<<"Enter real and img part: ";
 	xin>>y.real>>y.img;
 }
 void operator <<(ostream &xout,complex &y)
 {
 	xout<<y.real<<"+"<<y.img<<"i"<<endl;
 }
 
int main()
{
	complex c1;
	cin>>c1;
	cout<<"c1 : ";
	cout<<c1;
	
	return 0;
}
