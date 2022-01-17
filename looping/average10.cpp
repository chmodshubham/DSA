#include <iostream>
using namespace std;

int main()
{
	int n,a;
	double b;
		int s=0;
	for (n=1;n<=10;n++)
	{
		cin >> a ;
		s=s+a;
	}
	cout << s <<endl;
   b=s/10;
    cout <<b ;
	return 0;
}
