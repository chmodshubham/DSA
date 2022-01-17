#include <iostream>
using namespace std;

int main()
{
	cout << "2"<<endl;
	for (int i = 3; i <= 100 ; i++)
	{
		int j;
		for( j = 2 ; j <i; j++)
		{
			if (i%j==0)
			{
				break;
			}
		}
		if (j==i)
		{
			cout << i << endl;
		}
	}
	return 0;
}
