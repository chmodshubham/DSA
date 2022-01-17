#include <iostream>
using namespace std;

int main()
{
	int a=10;
	int* p=&a;
	cout << p <<endl;
	cout << *p <<endl;  //derefrencing p
	int** q=&p;
	cout << q << endl;
	cout << *q <<endl;
	cout <<**q <<endl;  //defrencing q two times
	return 0;
}
