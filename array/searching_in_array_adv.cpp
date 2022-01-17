#include <iostream>
using namespace std;

int binary_search(int n, int arr[],int key)
{
	int i=0;
	int e = n;
	while(i<=e)
	{
		int mid=(i+e)/2;
		if(arr[mid]>key)
		{
			e=mid-1;
		}
		else if(arr[mid]==key)
		{
			return mid;
		}
		else
		{
			i=mid+1;
		}
		
	}
	return -1;
}

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i=0;i<n;i++)
	{
		cin >>arr[i]; 
	}
    int key;
    cin >> key;
    cout << binary_search(n,arr,key) << endl;
  
	return 0;
}
