#include <bits/stdc++.h>
using namespace std;

#define vec vector<int>
#define loop(i, a, b) for (int i = a; i < b; i++)

int main()
{

    int n, k;
    cin >> n >> k;
    priority_queue<int, vec> pq;

    vec arr;

    loop(i, 0, n)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
        pq.push(arr[i]);
    }

    int sum = 0, count = 0;
    while (!pq.empty())
    {
        sum += pq.top();
        pq.pop();

        count++;
        if (sum >= k)
            break;
    }

    if (sum < k)
        cout << "no such subsequence.\n";
    else
        cout << "minimum size of subsequence is " << count << endl;

    return 0;
}