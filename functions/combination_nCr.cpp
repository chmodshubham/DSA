#include <iostream>
using namespace std;

int fact(int n)
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
	int n,r;
	cin >> n >> r;
	int ans = fact(n)/(fact(r)*fact(n-r));
	cout << ans;
	return 0;
}
