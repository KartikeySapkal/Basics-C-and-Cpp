//multiple inheritance
#include<iostream>
using namespace std;
class student{
	protected: 
	int rollno,m1,m2;
	public:
		void getdata()
		{
			cout<<"ENter Roll NO: ";
			cin>>rollno;
			cout<<"\nEnter marks for two subjects: ";
			cin>>m1>>m2;
			
		}
};
class sport{
	protected: 
	int sm;
	public: 
	void getsm()
	{
		cout<<"Enter sport marks: ";
		cin>>sm;
	}
};
class statement:public student,public sport{ //multiple inheritance
	int total,avg;
	public: 
	void dispay(){
	
	total = m1+m2+sm;
	avg=total/3;
	cout<<"\nRoll No= "<<rollno;
	cout<<"\nTotal Marks= "<<total;
	cout<<"\nAverage Marks= "<<avg;
}
	
};
int main()
{
	statement s1;
	s1.getdata();
	s1.getsm();
	s1.dispay();
	
	return 0;
}
