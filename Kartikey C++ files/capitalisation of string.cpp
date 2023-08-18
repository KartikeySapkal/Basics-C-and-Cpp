#include<iostream>
using namespace std;
int main()
{
	char a[30];
	int i;
	cout<<"Enter any string: ";
	cin>>a;
	for(i=0; a[i]!='\0'; i++)
	{
		if(a[i]>=97 && a[i]<=122)
		       a[i] = a[i] - 32;
	}
	
	cout<<"name is capital is: "<<a;
	return 0;
	
}
