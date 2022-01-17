#include <iostream>
using namespace std;

int swap(int a,int b)
{
	int temp=a;
	a=b;
	b=temp;
	cout << a << " " << b <<endl;
}

int main()
{
	int a=1;
	int b=2;
	swap(a,b);
	cout << a  << " " << b << endl;
	return 0;
}
