#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    int target;
    cin >> target;
    bool found = false;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        int lower = i + 1;
        int higher = n - 1;
        while (lower < higher)
        {
            int current = a[i] + a[lower] + a[higher];
            if (current == target)
            {
                found = true;
                break;
            }
            else if (current < target)
            {
                lower++;
            }
            else if (current > target)
            {
                higher--;
            }
        }
    }
    if (found)
        cout << "true\n";

    else
        cout << "false\n";
    return 0;
}