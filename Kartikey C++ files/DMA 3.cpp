#include<iostream>
using namespace std;
int main()
{
	int i,*p;
	p=new int[5];
	cout<<"Enter 5 values: \n";
	for(int i=0;i<5;i++)
	{
		cin>>p[i];
	}
	cout<<"Values store in block of memory\n";
	for(int i=0;i<5;i++)
	{
		cout<<p[i]<<endl;
	}
	delete []p;
}
