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
	
    int r_st=0,r_end=n-1;
    int c_st=0,c_end=m-1;
	while(r_st<=r_end && c_st<=c_end)
	{
	    for(int i=c_st;i<=c_end;i++)
	    {
	    	cout << a[r_st][i] << " ";
		}
		r_st++;
		
		for(int i=r_st;i<=r_end;i++)
	    {
	    	cout << a[i][c_end] << " ";
		}
		c_end--;
		
		for(int i=c_end;i>=c_st;i--)
	    {
	    	cout << a[r_end][i] << " ";
		}
		r_end--;
		
		for(int i=r_end;i>=r_st;i--)
	    {
	    	cout << a[i][c_st] << " ";
		}
		c_st++;
	}
	return 0 ;
} 
