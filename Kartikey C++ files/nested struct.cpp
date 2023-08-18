#include<iostream>
using namespace std;

struct date{
	int d,m,y;
};
struct student{
	char name[30];
	date dob;
};
int main()
{
	student s;
	int &dd=s.dob.d;
	int &mm=s.dob.m;
	int &yy=s.dob.y;
	
	cout<<"Enter name: ";
	cin>>s.name;
	
	cout<<"Enter Date of birth: ";
	cin>>dd>>mm>>yy;
	
	cout<<"Name of student="<<s.name;
	cout<<"\n DOB="<<dd<<"/"<<mm<<"/"<<yy;

	return 0;
}
