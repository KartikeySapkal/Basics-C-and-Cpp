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
	}
float bill()
{
	float amount;
	amount=milk*50 + tomatoes*20 + carrot*15; 
	cout<<"\nCost of Milk: "<<milk*50<<" Rs" ; 
	cout<<"\nCost of Tomatoes: "<<tomatoes*20<<" Rs";
	cout<<"\nCost of Carrots: "<<carrot*15<<" Rs"; 
	
	return amount;
}
};
int main()
{
	vegetables s1;
	float total;
	
	s1.get();
	total = s1.bill();
	float money;
	float user;
	float change;
	float extra;
	
	cout<<"\nAmount to be paid: "<<total<<" Rs";
	cout<<"\n\nEnter amount you want to pay: ";
	cin>>user;

	do{
		cout<<"Pls Pay More:)";
		cin>>extra;
		user=user+extra;
	}while(user<total);
		
	change= user - total;
	if(change==0){
			cout<<"\nThank you";
	}
	else 
	{
		cout<<"\nYour Change: "<<change<<" Rs";
		cout<<"\nThank you";
	}
	return 0;	
}


