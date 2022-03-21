#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

// maps
// Insertion : O(log(n))
// Deletion : O(log(n))
// Accessing : O(log(n))
// implemented using : Red-Black trees

// unordered maps
// Insertion : O(1)
// Deletion : O(n)
// Accessing : O(1)
// implemented using : Hash Table(basically array of buckets)


int main()
{
    map<int, int> mp;
    mp[3] = 2;
    cout << mp[3] << endl;
}