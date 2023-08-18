#include<iostream>
using namespace std;
class stud{
	int rn;
	char name[20];
	public: 
	void show()
	{
		cout<<"Roll NO: "<<rn<<endl;
		cout<<"Name: "<<name<<endl;
		
	}
	void get()
	{
		cout<<"Enter Roll No: "<<endl;
		cin>>rn;
		getchar();
		cout<<"Enter Name: ";
		cin.get(name,20);
	}
};
int main()
{
	stud *s=new stud;
	s->get();
	s->show();
	delete s;
}
