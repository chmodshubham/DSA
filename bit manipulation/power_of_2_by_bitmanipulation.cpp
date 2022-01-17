#include <iostream>
using namespace std;

int ispowerof2(int n)
{
	if(n==0)
	{
		return 0;
	}
	return ((n & (n-1))==0);
}

int main()
{
	cout << ispowerof2(12) << endl;        // 12 = 1100    , 11 = 1011
	                                        // 1100 & 1011 = 1000  != 0
	cout << ispowerof2(32) << endl;       // 32=100000  ,   31 = =011111  
	                                      //  100000 & 011111 = 000000
	return 0;
}
