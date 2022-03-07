#include <bits/stdc++.h>
using namespace std;

int find_peak_element(int arr[], int n, int first, int last)
{
    if (first > last)
        return -1;

    int mid = first + (last - first) / 2;
    if ((mid - 1) >= 0 && (mid + 1) < n && arr[mid] >= arr[mid - 1] && arr[mid] >= arr[mid + 1])
        return mid;

    else if ((mid - 1) >= 0 && arr[mid] < arr[mid - 1])
        return find_peak_element(arr, n, first, mid - 1);

    else
        return find_peak_element(arr, n, mid + 1, last);
}

int main()
{
    int arr[] = {0, 6, 8, 5, 7, 9};
    int n = 6;
    int idx = find_peak_element(arr, n, 0, n - 1);
    cout << "peak element index : " << idx << endl;
}