#include <iostream>
using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;
	int a[n][m];                         //2-d array is in sorted manner both from left to right and from top to bottom
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin >> a[i][j];
			
		}
	}
	
	int x;
	cout << " Target : ";
	cin >> x;
	
	int i = 0 ,j = m-1;
	int y=0;
	while(i<n && j>=0)
	{
		if(a[i][j]==x)
		{
			cout << " Element found "<< endl;
			y=1;
			break;
		}
		else if(a[i][j]<x)
		{
			i++;
		}
		else
		{
			j--;
		}
	}
	if(y==0)
	{
		cout << "Element not found." << endl;
	}
	return 0 ;
}
