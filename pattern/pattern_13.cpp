#include <iostream>
using namespace std;

int main()
{
	int i,j;
	for(i=1;i<=7;i+=2)
	{
		for(j=1;j<=7-i;j+=2)
		{
			cout << " ";
		}
		for(int k=1;k<=i;k++)
		{
			cout << "*";
		}
		cout << endl;
	}
	for(i=7;i>=1;i-=2)
	{
		for(j=1;j<=7-i;j+=2)
		{
			cout << " ";
		}
		for(int k=1;k<=i;k++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
