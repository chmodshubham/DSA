#include <bits/stdc++.h>
using namespace std;

int catalan(int n)
{
    if (n < 2) // Catalan = C
    {
        return 1; // C0 = 1 , C1 = 1 (given)
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += catalan(i) * catalan(n - 1 - i);
    }

    return ans;
}

int main()
{
    for (int i = 0; i <= 10; i++)
    {
        cout << catalan(i) << " ";
    }
    cout << endl;

    return 0;
}
// catalan no. gives the no. of BST structure from the given no. of nodes
