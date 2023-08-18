#include<iostream>
using namespace std;
class student; //
class zen{
	char course[20];
	float time;
	public: 

	friend void getdata(student&,zen&);
	friend void showdata(student,zen); //
};

class student{
	char name[50];
	public:
		friend void getdata(student&,zen&);
		friend void showdata(student,zen);
};

void getdata(student &x,zen &y)
{
	cout<<"Enter name: "<<endl;
	cin>>x.name;
	cout<<"Enter Course: "<<endl;
	cin>>y.course;
	cout<<"ENter timing: "<<endl;
	cin>>y.time;
}

void showdata(student x,zen y){
	cout<<"Name: "<<x.name<<endl;
	cout<<"course: "<<y.course<<endl;
	cout<<"Time: "<<y.time;
}

int main()
{
	student s;
	zen z1;
	
	getdata(s,z1);

	showdata(s,z1);

	return 0;
}
