#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int num)
{
	for (int j =2;j<=sqrt(num);j++)
	{
		if (num%j==0)
		{
			return false;
		}
	}
	return false;
}
int main()
{
	int n1,n2;
	cin >> n1 >> n2;
	for(int i=n1;i<=n2;i++)
	{
		if(isPrime(i))         // (isPrime(i)) = (isPrime(i)==true) ,by default
		{
		   cout << i << " is Prime" << endl;	
		}
		          
	}
	
	return 0;
}
