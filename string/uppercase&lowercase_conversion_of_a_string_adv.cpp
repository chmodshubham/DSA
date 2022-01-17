#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	string str="SpIShU";
	transform(str.begin(),str.end(),str.begin(),::toupper);    //transform(from where ,to where,starts from where, :: casetype)
	cout << str << endl;
	
	transform(str.begin(),str.end(),str.begin(),::tolower);
	cout << str <<endl;
	
	return 0;
}
