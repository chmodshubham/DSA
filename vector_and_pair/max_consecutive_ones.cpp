#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n; // 10
    vector<int> a(n);
    for (auto &i : a)
        cin >> i; // 1 0 0 0 1 1 1 0 1 0

    int k;
    cin >> k; // 2

    int zerocount = 0, i = 0, ans = 0;
    for (int j = 0; j < n; j++)
    {
        if (a[j] == 0)
        {
            zerocount++;
        }

        while (zerocount > k)
        {
            if (a[i] == 0)
                zerocount--;
            i++;
        }
        ans = max(ans, j - i + 1);
    }
    cout << ans;
    return 0;
}