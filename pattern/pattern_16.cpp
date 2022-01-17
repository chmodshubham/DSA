#include <iostream>
using namespace std;

int main()
{
	int i,j;

	for (i=1;i<=5;i=i+2)
	{
		for (j=1;j<=i;j++)
		{
			cout << "*";
		}
		cout << endl;
    }
    for (i=3;i>=1;i=i-2)
    {
    	for (j=1;j<=i;j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
