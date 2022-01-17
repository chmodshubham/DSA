#include <iostream>
using namespace std;

int divisible(int n,int a,int b)
{
	int c1=n/a;
	int c2=n/b;
	int c3=n/(a*b);
}

int main()
{
	int n,a,b;
	cin >> n >> a >> b;
	cout << divisible(n,a,b);
}
