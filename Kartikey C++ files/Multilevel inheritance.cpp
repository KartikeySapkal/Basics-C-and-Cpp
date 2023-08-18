//multilevel inheritance
#include<iostream>
using namespace std;
class one{
	public: 
	int a;
	void getdata()
	{
		cout<<"ENter number: ";
		cin>>a;
		
	}
};
class two:public one{
	public:
		int b;
		void square()
		{
			getdata();
			b=a*a;
			cout<<"\nSquare = "<<b;
			
		}
};
class three : public two{
	public: 
	int c;
	void cube()
	{
		square();
		c=b*a;
		cout<<"\nCube = "<<c;
	}
};

int main()
{
	three num;
	num.cube();
	return 0;
}
