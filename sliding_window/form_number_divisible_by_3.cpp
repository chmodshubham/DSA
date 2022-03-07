#include <bits/stdc++.h>
using namespace std;

void is_divisible_by_3(vector<int> arr, int k)
{
    pair<int, int> ans;
    int sum = 0;

    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }

    bool flag = false;
    if (sum % 3 == 0)
    {
        ans = make_pair(0, k - 1);
        flag = true;
    }

    for (int i = k; i < arr.size(); i++)
    {
        sum = sum - arr[i - k] + arr[i];
        if (sum % 3 == 0)
        {
            ans = make_pair(i - (k - 1), i);
            flag = true;
        }
    }
    if (!flag)
    {
        cout << "no such subarray exists\n";
    }
    else
    {
        for (int i = ans.first; i <= ans.second; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
}

int main()
{
    vector<int> arr{8, 23, 45, 12, 56, 4};
    is_divisible_by_3(arr, 3);
}