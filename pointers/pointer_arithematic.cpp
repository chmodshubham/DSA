#include <iostream>
using namespace std;

int main()
{
	int a=10;
	int* ptr=&a;
	cout << ptr << endl;  // example :   2000
	ptr++;
	cout << ptr <<endl; // 2004
	
	/*cout << endl << endl;
	
	char b='A';
	char* ptr_2=&b;
	cout << ptr_2 << endl;  // example :   2000
	ptr_2++;
	cout << ptr_2 <<endl; // 2001*/
	return 0;
}
