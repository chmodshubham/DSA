#include <iostream>
using namespace std;

int main()
{
	int s,y,b;
	cout<<"Salary:";
	cin>>s;
	cout<<"Year of Service:";
	cin>>y;
	b=5*s/100;
	if(y>5)
	{
		cout<<"Net Amount will be:"<<s+b;
	}
	else
	{
		cout<<"Net Amount will be:"<<s;
	}
	return 0;
}
