#include <iostream>
using namespace std;

int main()
{
	//matrix 1
	int n1,n2,n3;
	cin >> n1 >> n2 >> n3;
	int a[n1][n2];
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<n2;j++)
		{
			cin >> a[i][j];
			
		}
	}
	
	//matrix 2
	int b[n2][n3];
	for(int i=0;i<n2;i++)
	{
		for(int j=0;j<n3;j++)
		{
			cin >> b[i][j];
			
		}
	}
	
	int sum;
	int c[n1][n3];
	
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<n3;j++)
		{
			sum=0;
			for(int k=0;k<n2;k++)
			{
				sum += a[i][k]*b[k][j];
			}
			c[i][j]=sum;
		}
	}
	
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<n3;j++)
		{
			cout <<  c[i][j] << " ";
			
		}
		cout << endl;
	}
	return 0 ;
}
