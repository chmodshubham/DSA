#include <iostream>
using namespace std;

int main()
{
	int n1,n2;
	cout << "Take 1 inputs: ";
	cin >> n1 ;
	int m=1;
	for( int i=1;i<=n1;i++)
	{
		cout << i <<"*" ;
		m=m*i;
		
	}
	cout << "=" << m;
	
	return 0;
}
