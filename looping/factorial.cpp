#include <iostream>
using namespace std;

int main()
{
	int n,i;
	cout << "Take a no.:";
	cin >> n;
	int mul=1;
	for (i=2;i<=n;i++)
	{
		mul=mul*i;
	}
	cout << "The factorial of " << n << " is " << mul ;
	return 0;
}
