#include <bits/stdc++.h>
using namespace std;

#define mpii map<int,int>
#define vii vector<int,int>
#define pii pair<int,int>
#define loop(i,n) for(int i=0; i<n ; i++)

void top_k_most_elements(int arr[], int k, int n)
{
    mpii mp;
    if (n == 0)
        return;

    loop(i, n)
    {
        int s = mp.size();
        if (s == k && mp[arr[i]] == 0)
            break;

        mp[arr[i]]++;
    }

    // for (auto i : mp)
    //     cout << i.first << " " << i.second << endl;

    mpii::iterator it;

    vector<pii> ans;

    for (it = mp.begin();it != mp.end();it++)
    {
        if (it->second != 0)
            ans.push_back(make_pair(it->second, it->first));

    }

    sort(ans.begin(), ans.end(), greater<pii>());

    for (auto i : ans)
        cout << i.second << " " << i.first << endl;


}

int main()
{
    int arr[] = {1,2,2,2,3,5,4};
    int k = 2;
    int n = sizeof(arr) / sizeof(arr[0]);

    top_k_most_elements(arr, k, n);

    return 0;
}