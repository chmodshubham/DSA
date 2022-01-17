#include <iostream>
using namespace std;

int main()
{
	int x;
	cout << "Enter a no.:";
	cin >> x;
	int sum=0;
	while (x != 0)
	{
		int r = x%10;
		sum += r;
		x = x/10;
		/* if(x==0)         //no need to write.
		 {break;}*/
	}
	cout << "The sum of digits:" << sum;
	return 0;
}
