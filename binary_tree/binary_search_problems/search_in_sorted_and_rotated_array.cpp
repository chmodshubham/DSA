#include <bits/stdc++.h>
using namespace std;

int search_in_rotated_array(int arr[], int key, int left, int right)
{
    if (left > right)
        return -1;

    int mid = (left + right) / 2;
    if (arr[mid] == key)
        return mid;

    if (arr[left] <= arr[mid])
    {
        if (key >= arr[left] && key < arr[mid])
        {
            return search_in_rotated_array(arr, key, left, mid - 1);
        }
        return search_in_rotated_array(arr, key, mid + 1, right);
    }

    if (key > arr[mid] && key < arr[right])
    {
        return search_in_rotated_array(arr, key, mid + 1, right);
    }
    return search_in_rotated_array(arr, key, left, mid - 1);
}

int main()
{
    int arr[] = {30, 40, 50, 10, 20};
    int n = 5;
    int key = 40;
    int i = search_in_rotated_array(arr, key, 0, n - 1);

    if (i == -1)
    {
        cout << "Not found \n";
    }
    else
        cout << "Found\n";

    return 0;
}