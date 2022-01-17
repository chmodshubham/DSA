#include <iostream>
using namespace std;

//void reverse(string str , int n)
//{
//	if(n==0)
//	{
//		return ;
//	}
//	cout << str[n-1];
//	reverse(str, n-1);
//}

void reverse(string str, int i)
{
	if(i != str.size()-1)
	{
	    reverse(str, i+1);
    }
	cout << str[i];
	return ;
}

int main()
{
	string str="binod";
//	reverse(str,str.size());
    reverse(str,0);
	return 0;
}
