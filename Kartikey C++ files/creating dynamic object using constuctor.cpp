//create dynamic object using constructor 
#include<iostream>
#include<string.h>
using namespace std;
class stud{
	int rn;
	char name[20];
	public: 
	stud(int rn,char name[]){
		this->rn=rn;
		strcpy(this->name,name);
	}
	void show()
	{
		cout<<"Roll No: "<<rn<<endl;
		cout<<"Name : "<<name<<endl;
	}
	
};

int main()
{
	int rn;
	char name[20];
	cout<<"Enter roll no: ";
	cin>>rn;
	getchar();
	cout<<"Enter Name: ";
	cin.getline(name,20);
	stud *s=new stud(rn,name); //using constructor
	s->show();
	delete s;
	
	return 0;
}
