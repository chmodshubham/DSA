#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;      // k = windows size
    cin >> n >> k; // n=8 , k=3
    vector<int> a(n);
    for (auto &i : a)
        cin >> i; // 1 3 -1 -3 5 3 6 7

    deque<int> q;
    vector<int> ans;
    for (int i = 0; i < k; i++)
    {
        while (!q.empty() && a[q.back()] < a[i])
        {
            q.pop_back();
        }
        q.push_back(i);
    }
    ans.push_back(a[q.front()]);
    for (int i = k; i < n; i++)
    {
        if (q.front() == i - k)
        {
            q.pop_front();
        }
        while (!q.empty() && a[q.back()] < a[i])
        {
            q.pop_back();
        }
        q.push_back(i);
        ans.push_back(a[q.front()]);
    }

    for (auto i : ans)
        cout << i << " ";

    return 0;
}