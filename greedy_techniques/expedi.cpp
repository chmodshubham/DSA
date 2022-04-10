#include <bits/stdc++.h>
using namespace std;

#define loop(i,n) for(int i=0;i<n;i++)
#define stop first  
// distance from the town to the stop 
#define fAmt second
// amount of fuel available at that stop

int main()
{
    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        int n;
        cin >> n;

        vector<pair<int, int>> v(n);
        loop(i, n)
            cin >> v[i].stop >> v[i].fAmt;

        int l, f;// l = initial distance of truck from the town // f = initial fuel available 
        cin >> l >> f;

        loop(i, n)
            v[i].stop = l - v[i].stop;

        sort(v.begin(), v.end());

        int ans = 0;
        int curr = f;

        priority_queue<int, vector<int>> pq;//maxheap
        bool flag = 0;
        loop(i, n)
        {
            if (curr >= l)
                break;

            while (curr < v[i].stop)
            {
                if (pq.empty())
                {
                    flag = 1;
                    break;
                }
                ans++;
                curr += pq.top();
                pq.pop();
            }

            if (flag)
                break;
            pq.push(v[i].fAmt);
        }

        if (flag)
        {
            cout << "-1\n";
            continue;
        }

        while (!pq.empty() && curr < l)
        {
            curr += pq.top();
            pq.pop();
            ans++;
        }

        if (curr < l)
        {
            cout << "-1\n";
            continue;
        }

        cout << ans << '\n';

    }

}

// 1
// 4
// 4 4
// 5 2
// 11 5
// 15 10
// 25 10