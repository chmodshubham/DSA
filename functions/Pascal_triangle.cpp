#include <iostream>
using namespace std;

int fact(int n)
{
	int m=1;
	for (int i=1;i<=n;i++)
	{
		m*=i;
	}

	return m ;
}

int PasTri(int n)
{
	int nCr;
	for (int i=0;i<n;i++)	
	{
		for (int j=0;j<=i;j++)
		{   
		   nCr = fact(i)/(fact(j)*fact(i-j));
		   cout << nCr << " ";
	    }
	    cout << endl;
	}
	return nCr;
}

int main()
{
	int n,r;
	cin >> n ;
	
    PasTri(n);
	
	return 0;
}
