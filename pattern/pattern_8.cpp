#include <iostream>
using namespace std;

int main()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
		int n=0;
		for(j=1;j<=i;j++)
		{
			n+=1;
			cout << n;
		}
		cout<< endl;
	}
	return 0;
}
