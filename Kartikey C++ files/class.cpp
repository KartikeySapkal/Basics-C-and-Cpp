#include<iostream>
using namespace std; //:: scope resolution function
class car{
	int engine;
	float mileage;
	
	public:
	
	void set(int,float);
	void show();
};


void car:: set(int cc,float ml){
	engine =cc;
	mileage = ml;
}

void car:: show()
{
	cout<<"\nEngine Power= "<<engine<<"cc";
	cout<<"\nMileage="<<mileage<<"kmpl";
	
	}
int main()
{
	car Dzire,Honda_city;
	
	Dzire.set(1100,22.5);
	Honda_city.set(1400,14.5);
	
	
	cout<<"\nDzire info: ";
	Dzire.show();
	
	cout<<"\nHonda City Info: ";
	Honda_city.show();
	
	return 0;
}
