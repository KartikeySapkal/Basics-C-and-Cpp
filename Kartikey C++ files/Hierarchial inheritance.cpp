#include<iostream>
using namespace std;
class shape{
	protected:
		int width,height;
		public: 
		void getdata()
		{
			cout<<"Enter Width: ";
			cin>>width;
			cout<<"\nEnter Height: ";
			cin>>height;
						
		}
		
		};
class rectangle : public shape{			//: inheritance operator
										//:: scope resolution operator						
	public: 
	int getarea()
	{
		return width*height;
	}
};
		
class triangle : public shape{			//: inheritance operator
										//:: scope resolution operator						
	public: 
	float getarea()
	{
		return width*height*0.5;
	}
};


int main()
{
	rectangle R;
	triangle T;
	R.getdata();
	T.getdata();
	
	
	cout<<"\nArea = "<<R.getarea();
	cout<<"\nArea = "<<T.getarea();
	
	
	return 0;
}
