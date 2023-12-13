#include<iostream>
#include<list>
using namespace std;

int main(){ 

    list<int> numbers {1,2,3,4,5};
    list<char> vowels {'a','e','i','o','u'};
    
    numbers.push_front(235); //added at beginning
    numbers.push_back(123); //added at ending

    cout<<"List1 Elements: "<<endl;
    for(int number :numbers){ 
        cout<<number<<" ";
    }
    cout<<endl;
    
    numbers.pop_front();
    numbers.pop_back();
    
    cout<<"List1 Elements: "<<endl;
    for(int number :numbers){ 
        cout<<number<<" ";
    }
    
    cout<<"\nList2 Elements: "<<endl;
    for(char vowel:vowels){ 
        cout<<vowel<<" ";
    }
    cout<<endl;
    
    cout<<numbers.front()<<endl;
    cout<<numbers.back()<<endl;
    
    list<int>::iterator itr = numbers.begin();
    ++itr;
    cout<<"Second Element: "<<*itr<<endl;
    ++itr;
    ++itr;
    cout<<"Fourth Element: "<<*itr<<endl;
    
    return 0;
}
