#include <iostream>
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
	
	int s;
	cout << "Sum = ";
	cin >> s;
	int diff;
	for(int i=0;i<n;i++)
	{
		diff=s-arr[i];
		for(int j=0;j<n;j++)
		{
			if(j==i)
			{
				continue;
			}
			if(diff==arr[j])
			{
				cout << arr[i] << " at index: " << i << " and "  << arr[j] << " at index: " << j;
				return 0;
			}
		}
	}
	return 0;
}
