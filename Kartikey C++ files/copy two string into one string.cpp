#include<iostream>
#include<string.h>
using namespace std;
class strng{
	char s[100];
	public:
		void read()
		{
			cout<<"Enter string: ";
			cin.getline(s,100);
			
		}
		void print()
		{
			cout<<s<<endl;
			
		}
		
	strng operator +(strng s2)
	{
		strng s3;
		strcpy(s3.s,s);
		strcat(s3.s," ");
		strcat(s3.s,s2.s);
		return s3;
		}	
		
		
};
int main()
{
	strng str1,str2,str3;
	
	str1.read();
	str2.read();
	
	str3 = str1 + str2;
	
	str1.print();
	str2.print();
	str3.print();
	
	return 0;
}
