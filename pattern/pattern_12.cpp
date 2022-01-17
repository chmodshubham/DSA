#include <iostream>
using namespace std;

int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for( j=1;j<=5-i;j++)
		{
			cout << " ";
		}
		int k=i ;
		for(;j<=5;j++)
		{
		    cout << k;
		    k-=1;
		}
		k=2;
		for(;j<=5+i-1;j++)
		{
			cout << k++;
		}
		cout << endl;
	}
	return 0;
}
