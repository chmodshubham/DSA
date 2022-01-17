#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n,x;
	cout << "Take a no.:";
	cin >> x;
	int s=0;
	n=x;
	while (n!=0)
	{
		int r=n%10;
		s+=pow(r,3);                                         // s = s+ r*r*r;
		n/=10;
				
	}
	if(s==x)
	{
		cout << x << " is an armstrong no." << endl;
	}
	else
	{
		cout << x << " is not an armstrong no.";
	}
	return 0;
}
