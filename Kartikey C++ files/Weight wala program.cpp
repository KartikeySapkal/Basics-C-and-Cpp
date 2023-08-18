#include<iostream>
using namespace std;
class weight{
	int kg,gram;
	static int count;
	public: 
	void getdata()
	{
		cout<<"Enter weight in kilograms and grams: ";
		cin>>kg>>gram;
	}
	
	void showdata(){		
		if(gram>=1000)
		{
			kg = kg + gram/1000;
			gram=gram % 1000;
			
		}		
		cout<<kg<<" Kg "<<gram<<" Gram"<<endl;
	}
	
	weight add(weight x)
	{	weight z;
		z.kg=kg+x.kg;
		z.gram=gram+x.gram;
		return z;
	}
};
int main()
{
	weight w1,w2;
	weight w3;
	
	
	w1.getdata();
	w2.getdata();
	
	w1.showdata();
	w2.showdata();
		
    w3=w1.add(w2);
	
	
	
	
	w3.showdata();
	
	
	return 0;
}
