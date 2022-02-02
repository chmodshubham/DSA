#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     int arr[] = {2, 1, 5, 6, 2, 3};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int minHeight = arr[i];
//
//         for (int j = i; j < n; j++)
//         {
//             minHeight = min(arr[j], minHeight);
//             int len = j - i + 1;
//             ans = max(ans, len * minHeight);
//         }
//     }
//     cout << ans;

//     return 0;
// }

int maxArea(vector<int> a)
{
    stack<int> stk;
    int ans = 0;
    int i = 0;
    a.push_back(0);
    while (i < a.size())
    {
        while (!stk.empty() && a[stk.top()] > a[i])
        {
            int h = a[stk.top()];
            stk.pop();
            if (stk.empty())
                ans = max(ans, h * i);

            else
            {
                int len = i - stk.top() - 1; // this helps in finding the largest lenght with same or above level of current size block/graph
                ans = max(ans, h * len);
            }
        }
        stk.push(i);
        i++;
    }
    return ans;
}

int main()
{
    vector<int> a = {2, 1, 5, 6, 2, 3};
    cout << maxArea(a);
    return 0;
}
