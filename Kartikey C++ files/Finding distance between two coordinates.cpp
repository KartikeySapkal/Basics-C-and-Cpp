#include<iostream>
#include<math.h>
using namespace std;
int main()
{	
	float x1,y1,x2,y2;
    float dist;
	cout<<"Enter Coordinates of A: ";
    cin>>x1>>y1;
    cout<<"Enter Coordinates of B: ";
    cin>>x2>>y2;
    
    dist=pow(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)),0.5);
    cout<<"Distance Between Coordinates Is: "<<dist;
    
    float a,b;    
    a=(x1+x2)/2;
    b=(y1+y2)/2;
    cout<<"\nMidpoint is: "<<"(" <<a<<","<<b<<")";   
    return 0;
}
