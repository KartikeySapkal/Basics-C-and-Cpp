#include<iostream>
using namespace std;
class box{
	int l,b,h;
	public : 
	box()
	{
		l=b=h=0;
		
	}
	box (int x,int y,int z)
	{
		
		l=x;
		b=y;
		h=z;
		cout<<"\nObject created";
		
	}
	
	~box()
	{
		cout<<"\nObject will be destroyed after this function";
	}
	void show()
	{
		cout<<"\nl="<<l<<"\tb="<<b<<"\th="<<h;
	}
	
};

void fun()
{
	box b1(5,7,9);
	cout<<"\nDimention of b1 are: ";
	b1.show();
	
	
}

int main()
{
	
	cout<<"calling function from main";
	fun();
	cout<<"\nBack in main";
		
	return 0;
}
