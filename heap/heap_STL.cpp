#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int, vector<int>> max_heap; // by default it makes max heap
    max_heap.push(2);                          // T = O(log n)
    max_heap.push(1);
    max_heap.push(3);

    cout << max_heap.top() << endl;  // top => T = O(1)
    max_heap.pop();// T = O(log n)
    cout << max_heap.top() << endl
         << endl;

    priority_queue<int, vector<int>, greater<int>> min_heap;
    min_heap.push(3);
    min_heap.push(1);
    min_heap.push(2);

    cout << min_heap.top() << endl;
    min_heap.pop();
    cout << min_heap.top() << endl
         << endl;

    return 0;
}