#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << "Take a no.:";
	cin >> a;
	do
	{
		cout << "You has chosen " << a << endl;
		cout << "Take a no.:";
		cin >> a;
	}
	while(a>0);
  	return 0;
}

