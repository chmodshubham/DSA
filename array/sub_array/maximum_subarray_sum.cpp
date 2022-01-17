#include <iostream>
#include <climits>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	
	int maxi = INT_MIN;
	int sum;
	for(int i=0;i<n;i++)
	{
		sum =0;
		int j=i;
		while(j<n)
		{
			sum+=arr[j];
			maxi=max(sum,maxi);
			j++;
		}
	}
	cout << maxi ;
	return 0;
}
