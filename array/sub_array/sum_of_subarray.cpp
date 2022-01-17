#include <iostream>
using namespace std;

//sum of sub array

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i=0;i<n;i++)
	{
		cin >> arr[i] ;
	}
	
	int sum;
		for(int i=0;i<n;i++)
		{
			sum=0;
			int j=i;
			while(j<n)
			{
			   	sum+=arr[j];
			   	cout << sum << " ";
			   	j++;
			}
		}
		
//	int sum;
//	for (int i=0;i<n;i++)
//	{
//		sum=0;
//	    for (int j = i;j<n;j++)
//		{
//		   sum+=arr[j];
//		   cout << sum << " ";	
//		}	
//	}	
	
	return 0;
}
