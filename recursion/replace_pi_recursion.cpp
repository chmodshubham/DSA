#include <iostream>
using namespace std;

//void replace(string str,int i)
//{
//	if(i>=str.size()-1)
//	{
//		return;
//	}
//	if(str[i]=='p' && str[i+1]=='i')
//	{
//		str.erase(i+1,1);
//		cout << "3.14";
//	}
//	else
//	{
//		cout << str[i];
//	}
//	replace(str,i+1);
//	
//}

void replace(string str)
{
	if(str.size()==0)
	{
		return;
	}
	if(str[0]=='p'  &&str[1]=='i')
	{
		cout << "3.14";
		replace(str.substr(2));
	}
	else
	{
		cout << str[0];
		replace(str.substr(1));
	}
}

int main()
{
	string str="pippxxppiixipi";
//	replace(str,0);
    replace(str);
	return 0;
}
