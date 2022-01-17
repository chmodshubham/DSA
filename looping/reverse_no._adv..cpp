#include <iostream>
using namespace std;

int main()
{
	int n,i,s=0;
	cout << "Take a no.";
	cin >> n;
	while(n!=0)
	{
		int r=n%10;
		s = s*10 + r;
		n/=10;
	}
	cout << "The reverse of the no.: " << s;
	return 0;
}
