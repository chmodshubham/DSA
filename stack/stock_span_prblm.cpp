#include <bits/stdc++.h>
using namespace std;

vector<int> stockSpan(vector<int> price)
{
    vector<int> ans;
    stack<pair<int, int>> stk;
    for (auto i : price)
    {
        int day = 1;
        if (!stk.empty() && stk.top().first <= i)
        {

            day += stk.top().second;
            stk.pop();
        }
        stk.push({i, day} /*make_pair(i,day)*/);
        ans.push_back(day);
    }
    return ans;
}

int32_t main()
{
    vector<int> a = {100, 80, 60, 70, 60, 75, 85};
    vector<int> res = stockSpan(a);
    for (auto i : res)
        cout << i << " ";
    cout << "\n";

    return 0;
}

// brute force
// for (int i=0;i<n;i++)
// {
//     int days=0;
//     for(int j=i;j>=0;j--)
//     {
//         if(prices[i]>=prices[j])
//         days++;

//         else
//         break;
//     }
//     //span of ith day is 'days'
// }