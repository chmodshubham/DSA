#include <iostream>
using namespace std;

int sum(int n)
{
	int s=0;
	for(int i=1;i<=n;i++)
	{
		s=s+i;
	}
	cout << s;
    return s;	
}

int main()
{
	int n;
	cin >> n;
	
	sum(n);
	return 0;
}
