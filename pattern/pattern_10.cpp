#include <iostream>
using namespace std;

int main()
{
	int i,j,n;
	for(i=5;i>=1;i--)
	{
		for (n=1;n<i;n++)
		{
			cout << " ";
		}
		for(j=1;j<=5;j++)
		{
            cout << "*";
		}
		cout << endl;
	}
	return 0;
}
