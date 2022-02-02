#include <bits/stdc++.h>
using namespace std;

int rain_water(vector<int> a)
{
    stack<int> stk;
    int ans = 0;
    for (int i = 0; i < a.size(); i++)
    {
        while (!stk.empty() && a[i] > a[stk.top()] /*checking for the next wall ,is greater than the current one*/)
        {
            int cur = stk.top();
            stk.pop();
            if (stk.empty())
                break;

            int diff = i - stk.top() - 1; // checking the difference between the next wall and the previous wall and then subtract 1 from them to get the difference/length
            ans += (min(a[i], a[stk.top()]) /*check, which wall is less in height whether the previous wall or the next wall */ - a[cur] /*and then subtract the current wall size*/) * diff;
        }
        stk.push(i);
    }
    return ans;
}

int main()
{
    vector<int> a = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << rain_water(a);
    return 0;
}