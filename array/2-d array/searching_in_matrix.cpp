#include <iostream>
using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;
	int a[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin >> a[i][j];
			
		}
	}
	
	int x;
	cout << "Take the no. for search : ";
	cin >> x;
	int y=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]==x)
			{
				cout << i <<  " "  << j << endl;
				y=1;
			}
			
		}
	}
	if(y==0)
	{
		cout << " Not found.";
	}
	return 0 ;
}
