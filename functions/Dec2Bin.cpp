#include <iostream>
using namespace std;

int Dec2Bin(int n)
{
	int s=0,x=1;
	while (x<=n)
	{
		x*=2;
	}
	x/=2;
	while(x!=0)
	{
		int firstdigit= n/x;
		n=n-firstdigit*x;
		x/=2;
		s=s*10+firstdigit;
	}
	return s;
//    {
//    	int r=n%10;
//    	s=r*x+s;               to get the same number back 
//    	x=x*10;
//    	n=n/10;
//	  }  
//	  return s;
}

int main()
{
	int n;
	cin >> n;
	cout  << Dec2Bin(n);
	return 0;
}
