#include <iostream>
using namespace std;

int dec(int n)
{
	if(n==1)
	{
		cout << 1;
		return 0;
	}
	cout << n << " ";
	dec(n-1);
}

int main()
{
	int n;
	cin >> n;
	dec(n);
	return 0;
}
