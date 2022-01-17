#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string str="124358679";
	sort(str.begin(),str.end(),greater<int>());
	cout << str;
	return 0;
}
