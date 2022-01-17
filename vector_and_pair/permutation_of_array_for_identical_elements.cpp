#include <iostream>
#include "bits/stdc++.h"
using namespace std;

void helper(vector<int> &arr, vector<vector<int>> &ans, int idx)
{
    if (idx == arr.size())
    {
        ans.push_back(arr);
        return;
    }
    for (int i = idx; i < arr.size(); i++)
    {
        if (i != idx && arr[i] == arr[idx])
        {
            continue;
        }
        swap(arr[i], arr[idx]);
        helper(arr, ans, idx + 1);
        swap(arr[i], arr[idx]);
    }
    return;
}

vector<vector<int>> permute(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    helper(arr, ans, 0);
    return ans;
}

int32_t main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &i : arr)
    {
        cin >> i;
    }
    vector<vector<int>> ans = permute(arr);
    for (auto v : ans)
    {
        for (auto i : v)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}