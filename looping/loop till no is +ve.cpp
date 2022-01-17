#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << "Take a no.:";
	cin >> a;
	while(a>0)
	{
		cout << "You has chosen " << a << endl;
		cout << "Take a no.:";
		cin >> a;
	}
  	return 0;
}

