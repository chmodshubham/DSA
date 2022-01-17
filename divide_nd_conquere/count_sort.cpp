#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void countSort(int arr[], int n)
{
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
        maxi = max(maxi, arr[i]);

    vector<int> a(maxi + 1); // we either proceed through normal array
    for (int i = 0; i < a.size(); i++)
        a[i] = count(arr, arr + n, i);

    for (int i = 1; i < a.size(); i++)
        a[i] = a[i - 1] + a[i];

    int output[n] = {0};

    for (int i = (n - 1); i >= 0; i--) // we can also iterate from i=0
    {
        --a[arr[i]];
        output[a[arr[i]]] = arr[i];
    }

    for (int i = (n - 1); i >= 0; i--)
        arr[i] = output[i];
    return;
}

int main()
{
    int arr[] = {1, 3, 2, 3, 4, 1, 6, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    countSort(arr, n);
    for (int i = 0; i < 9; i++)
        cout << arr[i] << " ";

    return 0;
}

// 1)first we create an array of approx. range , time:O(max(Arr_i))   --  talking about array a[]

// 2)fill the frequencies of each element , time:O(N)

// 3)iterate the frequencies array , time:O(max(Arr_i))

// final time complexity : max(Arr_i,N)