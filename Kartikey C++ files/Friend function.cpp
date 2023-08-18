//friend function

#include<iostream>
using namespace std;
class B; //forward declaration
class A{
	int a;
	public: 
//	void get()
//	{
//		cout<<"Enter Value: ";
//		cin>>a;
//	}
	friend void get(A,B);
	friend int add(A,B); //declaration of friend function
};

class B{
	int b;
	public:
//		void get()
//		{
//			cout<<"Enter Value: ";
//			cin>>b;
//		}
		friend void get(A,B);		
		friend int add(A,B); //declaration of friend function
};
//access members of both class

void get(A x,B y)
{
	cout<<"Enter value : ";
	cin>>x.a;
	cout<<"Enter value : ";
	cin>>y.b;
}

int add (A x,B y){//defination
	return (x.a+y.b);
}


int main()
{
	A obj1;
	B obj2;
	
	get(obj1,obj2);
	
	cout<<"Sum = "<<add(obj1,obj2);
	
	return 0;
	
}
