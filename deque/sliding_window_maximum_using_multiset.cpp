#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;      // k = windows size
    cin >> n >> k; // n=8 , k=3
    vector<int> a(n);
    for (auto &i : a)
        cin >> i; // 1 3 -1 -3 5 3 6 7

    multiset<int, greater<int>> s;
    vector<int> ans;
    for (int i = 0; i < k; i++)
    {
        s.insert(a[i]);
    } // s={3,1,-1}

    ans.push_back(*s.begin()); // ans={3}
    for (int i = k; i < n; i++)
    {
        s.erase(s.lower_bound(a[i - k]));
        // s.erase(s.lower_bound(1))=s.erase(1)  =>  s.erase(3)  => s.erase(-1).....
        // s={3,-1}  => s={-1,-3}  => s={5,-3}....
        s.insert(a[i]);
        // s={3,-1,-3}  => s={5,-1,-3}  => s={5,3,-3}....
        ans.push_back(*s.begin());
        // ans={3,3}  => ans={3,3,5}  => ans={3,3,5,5}....
    }

    for (auto i : ans)
        cout << i << " ";

    return 0;
}

// multiset<int> 's' = by default, shows elements in ascending order
//  multiset<int, greater<int>> s;  //show elements in descending order
// s.insert(3);
// s.insert(2);
// s.insert(4);
// s.insert(1);
// s.insert(5);

// multiset<int>::iterator i;
// for (i = s.begin(); i != s.end(); i++)
// {
//     cout << *i<<" ";
// }  // 5 4 3 2 1
// cout << endl
//      << endl;
// cout << *s.lower_bound(3) << endl;  //lower_bound(3) means  which element in 's' from {5,4,3} is closer to 3
// cout << *s.upper_bound(3) << endl;  //upper_bound(3) means which element in 's' from {2,1} is closer to 3