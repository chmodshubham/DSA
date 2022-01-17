#include <iostream>
using namespace std;

int main()
{
	char x;
	int pro=1;
	int sum=0,i=0;
	while(x !='q')
	{
		int n;
		cout << "Enter the no.:";
		cin >> n;
		cout << "Enter c to continue or q to quit:";
		cin >> x;
		sum=sum+n;
		i=i+1;
		pro=pro*n; 
		if (x=='q')
		{
			break;
		}
	}
	int avg=sum/i;
	cout << "Sum:" << sum << endl;
	cout << "Average:" << avg << endl;
	cout << "Product:" << pro;
	return 0;
}
