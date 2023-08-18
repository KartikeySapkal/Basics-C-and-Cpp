//study of getline fucntion
#include<iostream>
using namespace std;
int main()
{
	char name[30],course[30],address[200];
	cout<<"Enter name: ";
	cin.getline(name,30);
	cout<<"\nEnter Course: ";
	cin.getline(course,30);
	cout<<"\nEnter address(press $ to complete): \n";
	cin.getline(address,200,'$');
	
	cout<<"\n\n\n\n----------NAME-----------\n"<<name;
	
	cout<<"\n\n---------Course-----------\n"<<course;
	
	cout<<"\n\n----------Address----------\n"<<address;
	
	return 0;
	
}
