#include<iostream>
using namespace std;
class room{
	int length,breadth,height;
public:
void getdata(int x,int y,int z){
	length=x;
	breadth=y;
	height=z;	
			}	
int area(){		
		
		return length*breadth;
}
	
int volume(){
		return length*breadth*height;	
}

};

int main()
{
	int l,b,h;
	room r1;
	cout<<"Enter the length,breadth and height of room: ";
	cin>>l>>b>>h;
	
	r1.getdata(l,b,h);
	
	cout<<"Area of room r1 is: "<<r1.area()<<"sqft";
	cout<<"\nVolume of room r1 is: "<<r1.volume()<<"cft";
	
	
	
	return 0;
}

