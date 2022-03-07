#include <bits/stdc++.h>
using namespace std;

int smallest_subarray_sum(int arr[], int n, int x)
{
    int sum = 0;
    int first = 0, end = 0;
    int min_length = n + 1;
    while (end < n)
    {
        while (sum <= x && end < n)
        {
            sum += arr[end];
            end++;
        }

        while (sum > x && first < n)
        {
            if (end - first < min_length)
            {
                min_length = end - first;
            }
            sum -= arr[first];
            first++;
        }
    }

    return min_length;
}

int main()
{
    int arr[] = {1, 4, 45, 6, 10, 19};
    int x = 51;
    int n = 6;

    int min_length = smallest_subarray_sum(arr, n, x);

    if (min_length == n + 1)
        cout << "no such subarray exits\n";
    else
        cout << "smallest subarray length with sum less than x : " << min_length << endl;
}

// time complexity = O(n)