#include <iostream>
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
	int key;
	cin >> key;
	int x=0;
		for (int i=0;i<n;i++)
	{
		if (arr[i]==key)
		{
		cout << "index = " << i << endl;
		x=1;
		}	
	}
	if(x==0)
	{
		cout << "-1";
	}
	return 0;
}
