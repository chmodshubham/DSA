#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << 'a'-'A' << endl;     //to check the difference btwn char a and A
	
	string str="spidey";
	for(int i=0;i<str.length();i++)
	{
		str[i] -= 32;
		cout << str[i];          // SPIDEY
	}
	
	cout << endl;
	str.empty();
	
	str="SPIDEY";
	for(int i=0;i<str.length();i++)
	{
		str[i] += 32;
		cout << str[i];        //spidey
	}
	
	cout <<endl;
	str.clear();
	
	str="SpIShU";
	for(int i=0;i<str.length();i++)
	{
		if(str[i]>='a' && str[i]<='z')
		{
		   str[i] -= 32;             
		   
	    }
	}
	cout << str ;         //SPISHU
	
	cout <<endl;
	str.clear();
	
	str="SpIShU";
	for(int i=0;i<str.length();i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		{
		   str[i] += 32;
		   
	    }
	}
	cout << str;          //spishu
	return 0;
}
