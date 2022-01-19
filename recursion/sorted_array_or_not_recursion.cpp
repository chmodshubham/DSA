#include <iostream>
using namespace std;

int sorted_or_not(int arr[], int n, int i)
{
	if (i == n - 1)
	{
		return 1;
	}

	if (arr[i] < arr[i + 1])
	{
		sorted_or_not(arr, n, i + 1);
	}
	else
	{
		return 0;
	}
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	cout << sorted_or_not(arr, 5, 0) << endl;
	int a[] = {1, 4, 7, 2};
	cout << sorted_or_not(a, 4, 0);
	return 0;
}
