#include <iostream>
using namespace std;

//bubble sorting

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	int x=n;
	while(x!=0)
	{
		for(int i=0;i<x-1;i++)
		{
			if (arr[i]>arr[i+1])
			{
				int y = arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=y;
			}
		}
		x--;
	}
	for (int i=0;i<n;i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
