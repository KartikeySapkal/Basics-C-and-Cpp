//Macro function is preprocessor directive....!
//we use #define keyword
#include<iostream>
using namespace std;
#define mul(x,y) x*y

int main()
{
	int a,b,y;
	
	cout<<"Enter a and b: ";
	cin>>a>>b;
	y = mul(a,b);
	cout<<y;
	
	return 0;
}



