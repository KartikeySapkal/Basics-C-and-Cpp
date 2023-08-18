#include<iostream>
using namespace std;
class emp{
	protected: 
	int id;
	char name[30];
	int bs;
	public: 
	void getinfo()
	{
		cout<<"Enter Your ID: ";
		cin>>id;
		getchar();
		cout<<"\nEnter Your Name: ";
		cin.getline(name,30);
		cout<<"\nEnter Your Basic Salary: ";
		cin>>bs;
	}
};
	class M:public emp{
		protected: 
		int hra,salary;
		public:
		
		void getman(){
		
			getinfo();
			cout<<"\nEnter House Rental Allowance : ";
			cin>>hra;
			salary=bs+hra;
		
		}
			void showdata()
	{
		cout<<"\nYour ID: "<<id;
		cout<<"\nYour Name: "<<name;
		cout<<"\nYour Salary: "<<salary;
	}
	
	};
    class S:public emp{
    	protected:
    		int ta,da,salary;
    		public :
    		
			void getsal(){
			
			getinfo();
    		cout<<"\nEnter T.A and D.A: ";
    		cin>>ta>>da;
    		salary=bs+ta+da;
    		
		    	}
		void showdata()
	{
		cout<<"\nYour ID: "<<id;
		cout<<"\nYour Name: "<<name;
		cout<<"\nYour salary: "<<salary;
	}
	
	
	};  
	
int main()
{
	M m1;
	S s1;
	int choice;
	
	do{
	cout<<"\nPress 1 for MANAGER\nPress 2 for SALESMAN: \nPress 3 to EXIT: \n";
	cin>>choice;
	
	
	if(choice==1)
	{
	m1.getman();
	m1.showdata();
	}
	else if(choice==2){
		s1.getsal();
		s1.showdata();
	}
	else if(choice==3)
	{
	break;	
	}
	else{
		cout<<"\nINVALID INPUT";
	}
	
}while(choice!=3);
	return 0;
	
	}	
	
	
