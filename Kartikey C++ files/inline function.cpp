#include<iostream>
using namespace std;
inline int square(int x){
	return  x*x;
	}	
	inline int cube(int x){
	return  x*x*x;
	}
int main()
{
	int a;
	a=5;
	cout<<"cube of the number is : ";
	cout<<cube(a);
	
	cout<<"\nsquare of the number is : ";
	cout<<square(a);	
	
	return 0;
	}	
		
