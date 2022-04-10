#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {5,2,4,7};
    priority_queue<int, vector<int>, greater<int>> pq;//min hea

    for (int i = 0;i < 4;i++)
        pq.push(arr[i]);

    int ans = 0;
    while (pq.size() > 1)
    {
        int tmp1 = pq.top();
        pq.pop();

        int tmp2 = pq.top();
        pq.pop();

        ans += tmp1 + tmp2;
        pq.push(tmp1 + tmp2);
    }

    cout << ans << '\n';

}