#include <iostream>
using namespace std;

int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=8;j++)
		{
		   	if(j>i&&j<9-i)
		   	{
		   		cout << " ";
			}
			else
			{
				cout << "*";
			}
		}
		cout << endl;
	}
    for(i=4;i>=1;i--)
	{
		for(j=1;j<=8;j++)
		{
		   	if(j>i&&j<9-i)
		   	{
		   		cout << " ";
			}
			else
			{
				cout << "*";
			}
		}
		cout << endl;
	}
	return 0;
}
