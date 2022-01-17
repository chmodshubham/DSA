#include <iostream>
// switch operator
using namespace std;

//different ways to say hii

int main()
{
	char x;
	cout << "Take a input:";
	cin >> x;
	switch (x)
	{
		case 'a':
		cout << "Sastriyakal\n";
		break;
		
		case 'b':
		cout << "Radhe-Radhe\n";
		break;
		
		case 'c':
		cout << "Namaste\n";
		break;
		
		default:
		cout << "Try some other inputs.";
	}
	return 0;
}
