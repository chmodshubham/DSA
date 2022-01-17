#include <iostream>
#include "bits/stdc++.h"
#include <vector> // vector is used to create a dynamic array which means we can change the size of the array
using namespace std;

// for distinct nos. in the array

vector<vector<int>> ans; // creates a 2-D dynamic array 'ans'

void permute(vector<int> &a, int idx) // vector<int> &a ,this actually creating a 1-D array 'a' which refrencing the values from array 'a' in main function
{
    if (idx == a.size()) // a.size() can only be used with dynamic arrays
    {
        ans.push_back(a); // .push_back(a) is actually inserting 1-D array 'a' into 2-D array 'ans' at the last
        return;
    }
    for (int i = idx; i < a.size(); i++)
    {
        swap(a[i], a[idx]); // swap() is an in built function of c++ which just swap the value of 2 variables
        permute(a, idx + 1);
        swap(a[i], a[idx]); // we are swaping again to get the elements in its original position
    }
    return;
}

int32_t main() // int32_t is creating exact size of 32 bit int
{
    int n;
    cin >> n;
    vector<int> a(n); // here we define a 1-D array 'a' with size n
    for (auto &i : a) // iterating from i=a[0] to i=a[n-1]  // &i is abstracting the values at different indexes of array 'a' and changing in value of 'i' will change the elements in 'a'
                      // here auto provides required data type to 'i' , in this condition it provide an int datatype to 'i'
    //  it actually a part of STL
    {
        cin >> i; // here we providing elements to array 'a'
    }
    permute(a, 0);

    for (auto v : ans) // here auto provides required data type to 'v' , in this condition it provide an int 1-D array datatype to 'j'
    {
        for (auto i : v)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}