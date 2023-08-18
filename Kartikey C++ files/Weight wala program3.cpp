#include<iostream>
using namespace std;
class weight{
	int kg,gram;
	public:
		void getdata()
		{
		cout<<"ENter Weight in Kg and Gram : "<<endl;
		cin>>kg>>gram;
		}
		void showdata()
		{
			if(gram>=1000)
			{
				kg=kg+gram/1000;
				gram=gram%1000;
			}
			
			cout<<"\nKg = "<<kg<<endl;
			cout<<"Gram = "<<gram<<endl;
		}
	
	weight operator++()
	{
		weight temp;
		gram=gram+kg*1000;
		gram=gram+100;
		kg=gram/1000;
		gram=gram%1000;
		temp.kg=kg;
		temp.gram=gram;
		return temp;
				}
	weight operator++(int)
	{
		weight temp;
		temp.kg=kg;
		temp.gram=gram;
		gram=gram+kg*1000;
		gram=gram+100;
		kg=gram/1000;
		gram=gram%1000;
		
		return temp;
				}				
	
};
int main()
{
	weight w1,w2,w3;
	w1.getdata();
	
	cout<<"prefix increament: ";
	w2=++w1;//prefix increament
	w1.showdata();
	w2.showdata();
	
	cout<<"postfix increament: ";
	w3=w1++;//postfix increament
	w1.showdata();
	w3.showdata();
	
	return 0;
}
