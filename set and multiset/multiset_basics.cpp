#include <iostream>
#include <set>
using namespace std;

int main()
{
    // most of the functions of multiset are equal to the set
    // implement using balanced BST
    multiset<int> s; // duplicates are allowed
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(3);
    s.insert(3);

    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    s.erase(3); // remove all 3's

    for (auto i : s)
        cout << i << " ";

    cout << endl;

    s.insert(3);
    s.insert(3);

    s.erase(s.find(3));

    for (auto i : s)
        cout << i << " ";

    cout << endl;

    return 0;
}
