#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);

    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";

    cout << endl;

    // 1 2 3

    vector<int>::iterator it;
    for (it = arr.begin(); it != arr.end(); it++)
        cout << *it << " ";
    // 1 2 3
    cout << endl;

    for (auto i : arr)
        cout << i << " ";
    // 1 2 3
    cout << endl;

    arr.pop_back();

    for (auto v : arr)
        cout << v << " ";
    // 1 2
    cout << endl;

    int a[] = {12, 24, 38, 40};
    vector<int> k(a, a + 4);
    for (auto i : k)
        cout << i << " ";
    cout << endl;

    // vector<int> arr2(3, (3, 3, 3));
    vector<int> arr2(3, 10);

    for (auto i : arr2)
        cout << i << " ";
    // 10 10 10
    cout << endl;

    swap(arr, arr2);

    for (auto v : arr)
        cout << v << " ";
    // 10 10 10
    cout << endl;

    for (auto i : arr2)
        cout << i << " ";
    // 1 2 3
    cout << endl;

    sort(arr.begin(), arr.end());

    for (auto v : arr)
        cout << v << " ";

    cout << endl;

    return 0;
}