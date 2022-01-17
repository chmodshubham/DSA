#include <iostream>
using namespace std;

int main()
{
	int i,j;
/*	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%2==0)
			{
				if(j%2==1)
				{
					cout << "0";
				}
				else
				{
					cout << "1";
				}
			}
			else
			{
				if(j%2==0)
				{
					cout << "0";
				}
				else
				{
					cout << "1";
				}
			}
		}
		cout<< endl;
	}*/
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if((i+j)%2==0)
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
