#include<iostream>
using namespace std;
int maximum(int x,int y,int z) 
{
	if(x>y && x>z)
	return x;
	else if(y>z && y>x)
	return y;
	else
	return z;
}

int main()
{
	int a,b,c,max;
	cout<<"ENter a,b,c: ";
	cin>>a>>b>>c;
	max=maximum(a,b,c);
	cout<<max;
	
	return 0;
}
