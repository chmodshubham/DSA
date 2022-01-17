#include <iostream>
using namespace std;

//making a simple calculator

int main()
{
	int n1, n2;
	cout << "Take 1st input:";
	cin >> n1;
	cout << "Take 2nd input:";
	cin >> n2;
	char ch;
	cout << "Operation:";
	cin >> ch;
	switch (ch)
	{
	case '+':
	cout << n1 + n2 ;
	break;
	case '-':
	cout << n1 - n2;
	break;
    case '*':
	cout << n1*n2;
	break;
	case '/':
	cout << n1/n2;
	break;
	case '%':
	cout << n1%n2;
	break;
	default:
	cout << "Use some other operation.";
	break;
    }
return 0;
}
