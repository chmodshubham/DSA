#include <iostream>
using namespace std;

string removeDup(string str)
{
	if(str.size()==0)
	{
		return "";
	}
	char ch=str[0];
	string ans= removeDup(str.substr(1));
	if(ch==ans[0])
	{
		return ans;
	}
	else
	{
		return (ch+ans);
	}
}

int main()
{
	cout << removeDup("aaaabbbeeecdddd");
	return 0;
}
