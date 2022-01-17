#include <iostream>
using namespace std;

int main()
{
    int i,j;
    for (i=7;i>=1;i=i-2)
    {
    	for (j=1;j<=i;j++)
    	{
    		if (j%2==1)
			{
				cout << "1";
			}
			else
			{
				cout << "0";
			}
		}
		cout << endl;
	}
	return 0;
}
