#include <iostream>
using namespace std;

//selection sorting

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[i])                           //3 2  5  1   6
			{
				int x=arr[j];
				arr[j]=arr[i];
				arr[i]=x;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout << arr[i] << " ";
	}
}
