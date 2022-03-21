#include <bits/stdc++.h>
using namespace std;

#define vec vector<int>

int main()
{
    int n;
    cin >> n;
    vec arr(n);

    for (auto& i : arr)
        cin >> i;

    map<int, int> mp;
    for (auto i : arr)
    {
        mp[i]++;
    }

    map<int, int> ::iterator it;
    for (it = mp.begin(); it != mp.end();it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}