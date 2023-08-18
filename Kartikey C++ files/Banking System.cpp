#include<iostream>
using namespace std;
class SBI{
	private: 
	int acc_no;
	char name[50];
	float balance;
	public: 
	void create();
	void deposit();
	void withdraw();
	void show();
	};

void SBI::create(){
	cout<<"Enter Account No: ";
	cin>>acc_no;
	getchar();
	cout<<"Enter Account Holder Name: ";
	cin.getline(name,50);
	cout<<"Enter Balance: ";
	cin>>balance;
	
}	

void SBI::deposit()
{	int a;
	cout<<"Enter Amount To Deposit: ";
	cin>>a;
	
	balance=balance+a;
	
	cout<<"Your Balance is : "<<balance;
}

void SBI::withdraw(){
	int b;
	cout<<"Enter amount to withdraw: ";
	cin>>b;
	if(b>balance){
		cout<<"Insufficient Balance..!";
		
	}
	else{
	
	balance=balance-b;
	cout<<"Your Balance is: "<<balance;
}
	
}

void SBI::show(){
	
	cout<<"Acoount Holder Name : "<<name<<endl;
	cout<<"Account No. : "<<acc_no<<endl;
	cout<<"Your Balance : "<<balance<<endl;
	}

int main()
{
	
	SBI s1;
	int choice;
	s1.create();
	do{
	cout<<"\nChoose Operation: \nPress 1 for deposit\nPress 2 for Withdraw\nPress 3 for info\nPress 4 for EXIT"<<endl;
	cin>>choice;
	if(choice==1)
	{
		s1.deposit();
	}
	else if(choice==2){
		s1.withdraw();
	}
	else if(choice==3){
		s1.show();
	}
	else if(choice==4){
		cout<<"RIP!";
		break;
		
	}
	else
	{
		cout<<"Wrong Input"<<endl;
		cout<<"Enter again"<<endl;
	}
}while(choice!=4);
	return 0;
}
