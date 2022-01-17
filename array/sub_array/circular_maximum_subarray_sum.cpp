#include <iostream>
#include <climits>
using namespace std;

int kadane (int n, int arr[])
{
	int sum=0;
	int maxi=INT_MIN;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
		if(sum<0)
		{
			sum=0;
		}
		maxi=max(maxi,sum);
	}
	return maxi;
}

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	
	int nonwrapsum;
	int wrapsum;
	
	nonwrapsum=kadane(n,arr);
	
	int totalsum=0;
	for(int i=0;i<n;i++)
	{
		totalsum+=arr[i];
		arr[i]=-arr[i];
	}
	wrapsum=totalsum + kadane(n,arr);           //kadane function will give maximum subarray sum when arr[i] is change to -arr[i]
	                                            // wrapsum=total sum of array - sum of non-contributing elements( - maximum subarray sum after arr[i] is change to -arr[i])
	int maxi=max(wrapsum,nonwrapsum);
	cout << maxi;
	
	return 0;
}
