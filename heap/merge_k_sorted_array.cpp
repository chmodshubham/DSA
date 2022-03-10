#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define vec vector<int>
#define pp pair<int, int>
#define f first
#define s second

int main()
{
    int k;
    cin >> k;
    vector<vec> arr;

    rep(i, 0, k)
    {
        int n;
        cin >> n;
        vec col;
        rep(j, 0, n)
        {
            int temp;
            cin >> temp;
            col.push_back(temp);
        }
        arr.push_back(col);
    }

    priority_queue<pp, vector<pp>, greater<pp>> pq;

    rep(i, 0, k)
    {
        pp x;
        x.f = arr[i][0];
        x.s = i;
        pq.push(x);
    }
    vec idx(k, 0);

    vec ans;
    while (!pq.empty())
    {
        pp x = pq.top();
        pq.pop();

        ans.push_back(x.f);
        if (idx[x.s] + 1 < arr[x.s].size())
        {
            pp p;
            p.f = arr[x.s][idx[x.s] + 1];
            p.s = x.s;
            pq.push(p);
        }
        idx[x.s] += 1;
    }

    rep(i, 0, ans.size())
    {
        cout << ans[i] << " ";
    }
}

// int main()
// {
//     multiset<int> s;
// int k;
// cin >> k;

// rep(i, 0, k)
// {
//     int n;
//     cin >> n;

//     rep(i, 0, n)
//     {
//         int input;
//         cin >> input;
//         s.insert(input);
//     }
// }

//     for (auto i : s)
//     {
//         cout << i << " ";
//     }

//     return 0;
// }

// int main()
// {
//     priority_queue<int, vec, greater<int>> pq;

//     int k;
//     cin >> k;

//     rep(i, 0, k)
//     {
//         int n;
//         cin >> n;

//         rep(i, 0, n)
//         {
//             int input;
//             cin >> input;
//             pq.push(input);
//         }
//     }

//     while (!pq.empty())
//     {
//         cout << pq.top() << " ";
//         pq.pop();
//     }
// }