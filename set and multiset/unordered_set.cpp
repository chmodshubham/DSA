#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    // implement using hashing
    // elements are in unordered
    unordered_set<int> s;

    s.insert(3);
    s.insert(2);
    s.insert(3);
    s.insert(7);

    for (auto i : s)
        cout << i << " ";

    return 0;
}
// time complexity
// insertion : O(n) in avg case, O(n) in worst case
// deletion : O(n) in avg case, O(n) in worst case
// lower/upper_bound : NA
