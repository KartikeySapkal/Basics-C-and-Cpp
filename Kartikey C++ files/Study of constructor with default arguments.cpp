//constructor with default arguments
#include<iostream>
using namespace std;
class add{
	
	int a,b,c;
	public:
		add(int x=0,int y=0,int z=0) //constructor with default arguments
		{
			a=x;
			b=y;
			c=z;
		}
	void display(){
		cout<<"Sum= "<<a+b+c<<endl;
	}
};
int main()
{
	add a1,a2(2,5),a3(2,5,7);
	a1.display();
	a2.display();
	a3.display();
	
	return 0;
}
