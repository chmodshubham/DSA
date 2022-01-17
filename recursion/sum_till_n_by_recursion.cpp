#include <iostream>
using namespace std;

int sum(int n)
{
	if(n==0)
	{
		return 0;
	}
	int tsum = n + sum(n-1);
	return tsum;
}

int main()
{
	int n;
	cin >> n;
	cout << sum(n);
	return 0;
}
