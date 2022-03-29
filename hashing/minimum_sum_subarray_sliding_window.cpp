#include<bits/stdc++.h>
using namespace std;

int minimum_subarray_sum(int arr[], int n, int k)
{
    int minSum = INT_MAX;
    int sum = 0;

    for (int i = 0;i < k;i++)
        sum += arr[i];

    for (int i = k;i < n;i++)
    {
        sum -= arr[i - k];
        sum += arr[i];
        minSum = min(minSum, sum);
    }

    return minSum;
}

int main()
{
    int arr[] = {-2,10,1,3,2,-1,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;
    cin >> k;

    cout << minimum_subarray_sum(arr, n, k) << endl;

    return 0;
}