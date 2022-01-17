#include <iostream>
using namespace std;

int main()
{
	int x,i;
	cout << "Take an input : ";
	cin >> x;
	int n = 0;
	for( i = 2 ;i < x; ++i)
	{
		if (x%i==0)
		{
			cout << "It is not a prime no." << endl;
			n = 3;    			                          // if this for loop excutes then it assign the value of n to be 3 otherwise it takes the initial value of it i.e. 0
			break;
		}
	}
	
	if (n==0)
	{
		cout << "It is a prime no." << endl;
	}
	
	return 0;
}

