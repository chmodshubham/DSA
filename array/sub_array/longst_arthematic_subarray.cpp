#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i=0;i<n;i++)
	{
		cin >> arr[i];                    //must be in ascending or descendng order to fufill the condition of AP
	}
	
	int prv_diff=arr[1]-arr[0];
	int count=2;                          //as any 2 elements are always in AP and also any AP Subarray must contain minimum 2 values
	int ans=2;
	for (int i=2;i<n;i++)
	{
		if(prv_diff==arr[i]-arr[i-1])
		{
			count++;
		}
		else
		{
			prv_diff=arr[i]-arr[i-1];
			count =2;                       
		}
		ans = max(ans,count);
	}
	
	cout << ans; 
	return 0;
}
