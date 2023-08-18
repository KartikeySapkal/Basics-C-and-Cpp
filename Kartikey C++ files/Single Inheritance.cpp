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
										//::scope resolution operator						
	public: 
	int getarea()
	{
		return width*height;
	}
};
int main()
{
	rectangle R;
	R.getdata();
	
	cout<<"\nArea = "<<R.getarea();
}
