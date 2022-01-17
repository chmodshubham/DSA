#include <iostream>
#include <climits>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i=0;i<n;i++)
	{
		cin >> arr[i];                  
	}
	int i=0;
	int max_i=INT_MIN;
	int ans=0;
	while(i<n)
	{
		if(arr[i]>arr[i+1])
		{
		   max_i=0;
		   for(int j=0;j<i;j++)
		   {
		   	    max_i=max(max_i,arr[j]);
		   }
		   if(arr[i]>max_i)
		   {
		   	    ans++;  
		   }	
		}
		i++;
	}
	cout << ans;
	return 0;
}
