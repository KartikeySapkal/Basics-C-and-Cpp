//use of references in function

#include<iostream>
using namespace std;
void swap(int&,int&);
int main()
{
	int a=12,b=32;
	cout<<a<<" "<<b<<endl;
	swap(a,b);
	cout<<a<<" "<<b;
	return 0;
}
void swap(int &x,int &y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
