#include <bits/stdc++.h>
using namespace std;

#define vec vector<int>
#define vecpr vector<pair<int,int>>
#define val first
#define wt second
#define loop(i,a,b) for(int i=a;i<n;i++)

int main()
{
    int n; cin >> n;
    vector<vec> v;

    loop(i, 0, n)
    {
        int weigth, value; cin >> value >> weigth;
        v.push_back({value,weigth,value / weigth});
    }

    sort(v.begin(), v.end(), [](vec& a, vec& b)
        {
            return a[2] > b[2];
        }
    );

    cout << '\n';
    int k; cin >> k; // knapsack storage
    int tValue = 0;
    loop(i, 0, n)
    {
        if (v[i][1] <= k)
        {
            tValue += v[i][0];
            k -= v[i][1];
            // cout << k << " " << tValue << '\n';
        }
        else
        {
            tValue += v[i][2] * k;
            k -= k;
            // cout << k << " " << tValue << '\n';
        }

        if (k == 0)
            break;
    }

    cout << tValue << '\n';


}