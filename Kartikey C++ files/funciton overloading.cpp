#include<iostream>

using namespace std;


float area(float, float=3.1415);  //default argument


int main()
{
	float r;
	cout<<"Enter radius: ";
	cin>>r;
	
	cout<<"Area of circle= "<<area(r);
	
	return 0;
}


float area(float x, float y)
{
	return x*x*y;
}





