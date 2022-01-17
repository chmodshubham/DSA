#include <iostream>
using namespace std;

int inc(int n,int i)
{
	if(i==n)
	{
		cout << n;
		return 0;
	}
	cout<< i << " ";
	inc(n,i+1);
}

int main()
{
	int n;
	cin >> n;
	inc(n,1);
	return 0;
}
