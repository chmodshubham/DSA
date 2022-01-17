#include <iostream>
using namespace std;

int main()
{
	int x;
	cout << "Take a no.:";
	cin >> x;
	for(int i=3;i<=x;i++)
	{
		if(x%i==0)
		{ int j;
			for(j=2;j<i;j++)
			{
				if (i%j==0)
				{
					break;
				}
			}
			if(j==i)
	       	{
			cout << i;
		    }
		}
	}
	return 0;
}
