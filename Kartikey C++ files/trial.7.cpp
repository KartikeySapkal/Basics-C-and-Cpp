#include<iostream>
#include<string.h>
#include<math.h> //librabry use to use other code pressent in c/c++
inline int sum(int x,int y){
		
		return x+y;
}

using namespace std;
int main()
{
	int a;
	int b;
	cout<<"Enter A and B : "<<endl;
	cin>>a>>b; // >> insertion operator 
	
	cout<<"Sum = "<<sum(a,b); // << exersion operator 
	return 0;
}
