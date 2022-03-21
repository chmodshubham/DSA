#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0;i < n;i++)
        cin >> arr[i];

    map<int, int> mp;

    int prefixSum = 0;

    for (int i = 0;i < n;i++)
    {
        prefixSum += arr[i];
        mp[prefixSum]++;
    }

    int ans = 0;
    map<int, int>::iterator it;
    for (it = mp.begin();it != mp.end();it++)
    {
        int temp = it->second;
        ans += (temp * (temp - 1)) / 2; // nC2 // Permutation & Combination

        if (it->first == 0)
            ans += it->second;
    }

    cout << ans << endl;
    return 0;
}