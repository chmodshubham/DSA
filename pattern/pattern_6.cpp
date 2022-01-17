#include <iostream>
using namespace std;

int main()
{
	int i,j,n=0;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			n+=1;
			cout << n << " ";
		}
		cout << endl;
	}
	return 0;
}
