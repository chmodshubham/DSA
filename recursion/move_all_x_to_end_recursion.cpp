#include <iostream>
using namespace std;

string move_X(string str)
{
	if(str.size()==0)
	{
		return "";
	}
	char ch =str[0];
	string ans = move_X(str.substr(1));
	
	if(ch =='x')
	{
	    return (ans+ch);
	
	}
	return (ch+ans);
}

int main()
{
	cout << move_X("axxbdxcefxhix");
	return 0;
}
