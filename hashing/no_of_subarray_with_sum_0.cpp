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
    int ans = 0;

    for (int i = 0;i < n;i++)
    {
        prefixSum += arr[i];

        //The function find() returns an iterator or a constant iterator which refers to the position where the key is present in the map. If the key is not present in the map container, it returns an iterator or a constant iterator which refers to map.end(). 
        // mp.end() iterator pointing to the next of last element.

        if (mp.find(prefixSum) != mp.end())
        {
            ans += mp[prefixSum];
        }
        mp[prefixSum]++;
    }


    if (mp.find(0) != mp.end())
    {
        ans += mp[0];
    }
    // int ans = 0;
    // map<int, int>::iterator it;
    // for (it = mp.begin();it != mp.end();it++)
    // {
    //     int temp = it->second;
    //     ans += (temp * (temp - 1)) / 2; // nC2 // Permutation & Combination

    //     if (it->first == 0)
    //         ans += it->second;
    // }

    cout << ans << endl;
    return 0;
}

