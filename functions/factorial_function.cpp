#include <iostream>
using namespace std;

int factorial(int n)
{
	int m=1;
	for (int i=1;i<=n;i++)
	{
		m*=i;
	}
	
	return m ;
}

int main()
{
	int n;
	cin >> n;
	
    cout <<  factorial(n);
	return 0;
}
