#include <bits/stdc++.h>
using namespace std;

int max_sum_subarray(int arr[], int n, int k, int x)
{
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }

    int ans;
    if (sum < x)
        ans = sum;

    int start = 0;
    while (start <= (n - 1))
    {
        sum = sum - arr[start] + arr[start + k];

        if (sum < x)
            ans = max(ans, sum);

        start++;
    }
    return ans;
}

int main()
{
    int arr[] = {7, 5, 4, 6, 8, 9};
    int n = 6;
    cout << max_sum_subarray(arr, n, 3, 20) << " is the maximum sub-array with sum < x";
}