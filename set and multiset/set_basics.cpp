#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s; // duplicate elements are not allowed // by default it store the elements in ascending order
    // set<int, greater<int>> s; // stores element in  descending order
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(4);
    // random access is not available

    for (auto i : s)
        cout << i << " "; // 1 2 4

    cout << endl;
    cout << s.size() << endl; // 3

    s.erase(2);

    for (auto i : s)
        cout << i << " "; // 1 4
    cout << endl;

    // method 2 print
    set<int>::iterator i;
    for (i = s.begin(); i != s.end(); i++)
        cout << *i << " ";
    cout << endl;

    // in reverse order
    for (auto j = s.rbegin(); j != s.rend(); j++)
    {
        cout << *j << " "; // 4 2 1
    }
    cout << endl;
    s.insert(3);
    s.insert(5);

    for (auto k : s)
        cout << k << " ";
    cout << endl;

    cout << *s.lower_bound(3) << endl; // print the closest element to 3 iterating from the beginning till the element itself
    cout << *s.upper_bound(3) << endl; // print the closest element to 3 iterating from the next element to 3 till the end

    s.erase(s.begin());

    for (auto k : s)
        cout << k << " ";
    cout << endl;

    return 0;
}

// time complexity
// insertion : O(log n)
// deletion : O(log n)
// lower/upper_bound : O(log n)