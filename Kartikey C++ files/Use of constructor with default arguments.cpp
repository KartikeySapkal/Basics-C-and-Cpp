/*WAP to calculate simple interest for given principal,roi,time in year */
#include<iostream>
using namespace std;

class FD{
	float pri,noy,roi,si;
	public:
	FD(float p,float t,float r=5.5)
	{
		pri=p;
		noy=t;
		roi=r;
		si=(pri*noy*roi)/100;
			}
	
	void showSI(){
		cout<<"\nSimple interest= "<<si;
	}
	
};

int main()
{
	float amount,years;
	char choice;
	
	cout<<"To calculate simple interest\n";
	cout<<"Enter amount and years: ";
	cin>>amount>>years;
	
	cout<<"are you old and wise.?(y/n): ";
	cin>>choice;
	
	
	if(choice=='y')
	{
		FD f1(amount,years,6.5);
		f1.showSI();
	}
	else{
		FD f1(amount,years);
		f1.showSI();
	}
	
	return 0;
}

