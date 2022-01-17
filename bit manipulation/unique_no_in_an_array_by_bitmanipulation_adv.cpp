#include <iostream>
using namespace std;

int getBit(int n , int pos )
{
	return ((n & (1<<pos)) != 0);
}

int setBit(int n, int pos)
{
	return (n | (1<< pos));
}

int uniqueno(int arr[], int n)
{
	int a[64];
	for(int i=0;i<64;i++)
	{
		a[i]=0;
	}
	
	int sum=0;
	for(int i=0;i<64;i++)
	{
		for(int j=0;j<n;j++)
		{
		    if(getBit(arr[j],i))
	    	{
			    a[i]++;
    		}
	    }
	    if(a[i] % 3 != 0)
		{
			sum=setBit(sum,i);
		
		}
	}
	
	
//	for(int i=0;i<64;i++)
//	{
//		if(a[i] % 3 != 0)
//		{
//			sum=setBit(sum,i);
//		}
//	}
	return sum;
}

int main()
{
	int arr[]={2,3,4,5,4,2,3,2,4,3};
	cout << uniqueno(arr,10);
	return 0;
}
