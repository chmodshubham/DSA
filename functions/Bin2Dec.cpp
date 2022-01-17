#include <iostream>
using namespace std;

int Bin2Dec(int n)               //we would proceed in the same way for the oct2dec but not for the hexa2dec
{
	int s=0,m=1;
	while (n!=0)
	{
		int r=n%10;
		s+=m*r;
		m*=2;                   // for octa , m*=8
		n/=10;
	}
	return s;
}

int main()
{
	int n;
	cin >> n;
	cout << Bin2Dec(n);
	return 0;
}
