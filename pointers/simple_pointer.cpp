#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int *ptr;
	ptr = &a;

	char ch = 'A';
	char &chp = ch; // here 'chp' storing the value of 'ch' and its address is same as of 'ch'

	cout << a << endl;
	cout << &a << endl;
	cout << ptr << endl;
	cout << *ptr << endl; //*ptr is storing the value of the variable, whose address is stored by ptr.

	chp += a;
	cout << ch << endl;
	return 0;
}
