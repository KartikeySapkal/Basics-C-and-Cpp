#include<iostream>

using namespace std;

class student{
	private:
		int rn;
		char name[20];
	public:
		void getdata()
		{
		cout<<"Enter rn: ";
		cin>>rn;
		cout<<"Enter name: ";
		cin>>name;
	
		}
		void showdata()
		{
		cout<<"Name: "<<name;
		cout<<"\nRn: "<<rn;
		}
};

int main()
{
	student s[3]; int i;
	
	for(i=0; i<3; i++)
	{
		cout<<"Enter details of student "<<i+1<<endl;
		s[i].getdata();
	}
	
	for(i=0; i<3; i++)
	{
		cout<<"\nInfo of student "<<i+1<<endl;
		s[i].showdata();
	}

	return 0;
}


//encapsulation
//abstraction  to separate implementation and interface

