#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void waveSort(int arr[], int n)
{
    int i = 1;
    while (i < n)
    {
        if (arr[i] > arr[i - 1])
            swap(arr[i - 1], arr[i]);

        if (arr[i] > arr[i + 1] && i <= n - 2)
            swap(arr[i + 1], arr[i]);

        i += 2;
    }
    return;
}

int main()
{
    int arr[] = {1, 3, 4, 7, 5, 6, 2};
    waveSort(arr, 7);
    for (int i = 0; i < 7; i++)
        cout << arr[i] << " ";
    return 0;
}

// time complexity
// t=O(N/2)=O(N);