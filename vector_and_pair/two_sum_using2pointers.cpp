#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    int target;
    cin >> target;
    sort(a.begin(), a.end());
    int st = 0, end = n - 1;

    while (st < end)
    {
        int sum = a[st] + a[end];
        if (sum == target)
        {
            cout << "indices are : " << st << " " << end;
            break;
        }
        else if (sum > target)
        {
            end--;
        }
        else if (sum < target)
        {
            st++;
        }
    }
}