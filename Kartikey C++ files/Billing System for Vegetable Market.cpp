//2 litre Milk at the rate of 50rs per kg
//1.5 kg tomatoes at the rate 20rs per kg
//2.5kg carrot at the rate 15 rs per kg

#include<iostream>
using namespace std;
class vegetables{
	float milk;
	float tomatoes;
	float carrot;
	public: 
	void get()
	{
		cout<<"How Many Litres of Milk you want: ";
		cin>>milk;
		cout<<"How Many Kg's of Tomatoes you want: ";
		cin>>tomatoes;
		cout<<"How Many Kg's of Carrots you want: ";
		cin>>carrot;
		cout<<"*************************************";
	}
float bill()
{
	float amount;
	amount=milk*50 + tomatoes*20 + carrot*15; 
	cout<<"\nCost of Milk: "<<milk*50<<" Rs" ; 
	cout<<"\nCost of Tomatoes: "<<tomatoes*20<<" Rs";
	cout<<"\nCost of Carrots: "<<carrot*15<<" Rs"; 
	cout<<"\n*************************************";
	return amount;
}
};
int main()
{
	char choice;
	int flag=0;
	
	vegetables s1;
	float total;
	
	do{
	s1.get();
	total = s1.bill();
	float money;
	float user;
	float change;
	float extra;
	
	cout<<"\nAmount to be paid: "<<total<<" Rs";
	cout<<"\n*************************************";
	cout<<"\nEnter amount you want to pay: ";
	cin>>user;
	do{		
	if(user<total)
	{
	cout<<"\nPls Pay More: ";
	cin>>extra;
	user=user+extra;
	}
	else
	continue;
} while(user<total);
	change= user - total;
	if(change==0){
			cout<<"\nThank you";
	}
	else 
	{
		cout<<"\n*************************************";
		cout<<"\nYour Change: "<<change<<" Rs";
		cout<<"\nThank you";
		cout<<"\n*************************************";
	}
	cout<<"\nDo you want to shop again ?(Type Y for YES And N for NO to Exit)";
	cin>>choice;
	if(choice=='Y')
		flag=1;
	else if(choice=='N')
		flag=0;
	else 
	{
		cout<<"\nInvalid Input";
		cout<<"\nProper Input Pls : ";
		cin>>choice;
	}
	}
	while(flag==1);
	cout<<"Thank You RIP:)";

	return 0;	
}
