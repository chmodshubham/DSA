#include <iostream>
using namespace std;

//one rupee 1 chocolate and 3 wrappers return 1 chocolate

int main()
{
	int n;
	cin >> n;
	int s=0;
	s+=n;
	while(n>=3)
	{
		int x=n/3;
		int y=n%3;
		s=s+x;
		n=x+y;
	}
	cout << s;
	return 0;
	
}
