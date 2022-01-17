#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

// reducing the given array means putting the indexes from 0 to n in the array respective to indexes of the elements in increasing order.

bool mycompare(pair<int, int> p1, pair<int, int> p2)
{
    // p1 is taking the first array inside the 'ans'2-D array i.e. for this case , it is (10,0) and for p2 ,it takes (16,1).
    // now return condition in this , p1 check for each further 1-D array inside 'ans' array(p2 changing continuously from (16,1), (7,2),(14,5)....so on) and after that p1 shift to 1 position further and checks same for further arrays.
    // in short it actually performing the ascending_order_array.cpp type in the array file
    return p1.first < p2.first;
}

int main()
{
    int a[] = {10, 16, 7, 14, 5, 3, 12, 9};
    vector<pair<int, int>> ans;
    for (int i = 0; i < (sizeof(a) / sizeof(a[0])); i++)
    {
        // pair<int, int> v;
        // v.first=a[i];
        // v.second=i;
        ans.push_back(make_pair(a[i], i));
    }

    sort(ans.begin(), ans.end(), mycompare);

    for (int i = 0; i < ans.size(); i++)
        a[ans[i].second] = i;

    for (int i = 0; i < ans.size(); i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}