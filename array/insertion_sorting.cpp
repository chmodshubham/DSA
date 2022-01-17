#include <iostream>
using namespace std;

//insertion sorting

int main()
{
    int n;
	cin >> n;
	int arr[n];
	for (int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	
    for(int i=1;i<n;i++)
    {
    	int current = arr[i];
    	int j=i-1;
    	while(arr[j]>current && j!=-1)
    	{
    		int x=arr[j+1];
    		arr[j+1]=arr[j];
    		arr[j]=x;
    		j--;
		}
		arr[j+1]=current;
    	
	}

	for (int i=0;i<n;i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
