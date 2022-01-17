#include <iostream>
using namespace std;

//fibonacci number

int fibo(int n)
{
	if(n==1)
	{
		return 0;
	}
	if(n==2)
	{
		return 1;
	}
	int fib=fibo(n-1)+fibo(n-2);
	return fib;
}

int main()
{
	int n;
	cin >> n;
	cout << fibo(n);
	return 0;
}
