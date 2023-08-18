#include<iostream>

using namespace std;

int main()  
{  
    int a=5; //ordinary variable
    int &x=a;   //reference variable1   
	
    x=10;    //change in x reflects change in a 
    cout<<"a= "<<a<<endl;    

    a=12;   //change in a reflects change in x 
    cout<<"x= "<<x; 
    return 0;  
}  
