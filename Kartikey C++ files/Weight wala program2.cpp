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
			
			cout<<"Kg = "<<kg<<endl;
			cout<<"Gram = "<<gram<<endl;
		}
	
int operator>(weight x)
{
		int g1,g2;
		g1=gram+kg*1000;
		g2=x.gram+x.kg*1000;
		
		if(g1>g2)
		return 1;
		else
		return 0;
}

	
};
int main()
{
	weight w1,w2;
	w1.getdata();
	w2.getdata();
	
	if(w1>w2)
		cout<<"w1 is greater";
	else if(w2>w1)
		cout<<"w2 is greater";
	

	
	return 0;
}
