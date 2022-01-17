#include <iostream>
using namespace std;

void st_occurence(int arr[], int input, int i, int n)
{
	if (arr[i] == input)
	{
		cout << i << " ";
		return;
	}
	if (i == n - 1)
	{
		cout << "not found";
		return;
	}
	st_occurence(arr, 2, i + 1, 11);
}

void last_occurence(int arr[], int input, int n)
{

	if (arr[n - 1] == input)
	{
		cout << n - 1;
		return;
	}
	last_occurence(arr, 2, n - 1);
}

int main()
{
	int arr[] = {3, 2, 4, 2, 5, 1, 4, 2, 2, 1, 9};
	st_occurence(arr, 2, 0, 11);
	last_occurence(arr, 2, 11);
	return 0;
}
