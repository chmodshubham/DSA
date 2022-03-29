#include<bits/stdc++.h>
using namespace std;

// sorting is the main concept of greedy algorithm

int main()
{
    int n; cin >> n;
    vector<vector<int>> vec;

    for (int i = 0;i < n;i++)
    {
        int first, last; cin >> first >> last;
        vec.push_back({first,last});
    }

    sort(vec.begin(), vec.end(), [&](vector<int>& a, vector<int>& b)
    // parameters inside the function is what contained by the dynamic datatype we take, for this case, we take vector<int> inside the 2-D vector
    // similarly if we take pair inside the 2-D vector then we have to take pair<int,int> as the function parameters 
        {
            return a[1] < b[1]; // sorting according to the second part of each array inside the vector
        });
    // [&]/[] comparator function
    // [&] represents calling of a function 

    int take = 1;
    int end = vec[0][1];
    for (int i = 0;i < n;i++)
    {
        if (vec[i][0] >= end)
        {
            take++;
            end = vec[i][1];
        }
    }
    cout << take << endl;

}