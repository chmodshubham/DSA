#include <iostream>
using namespace std;

//check the no. is prime no. or not.

int main()
{
	int n,i;
	cout << "Take a number:";
	cin >> n;
	for (i=2;i<n;i++)
	{
		if (n%i==0)
		{
			cout << "It is not a prime number.\n";
			break;
		}	
	}
	if (i==n)
	{
		cout << "It is a prime no.";
	}
	return 0;
}
