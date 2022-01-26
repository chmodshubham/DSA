#include <iostream>
#include <stack>
using namespace std;

// approach 1
//  class queue
//  {

//     stack<int> s1;
//     stack<int> s2;

// public:
//     void enqueue(int val)
//     {
//         s1.push(val);
//     }

//     int dequeue()
//     {
//         if (s1.empty() && s2.empty())
//         {
//             cout << "Queue is empty. \n";
//             return -1;
//         }
//         if (s2.empty())
//         {
//             while (!s1.empty())
//             {
//                 s2.push(s1.top());
//                 s1.pop();
//             }
//         }

//         int topval = s2.top();
//         s2.pop();
//         return topval;
//     }

//     bool empty()
//     {
//         if (s2.empty() && s1.empty())
//         {
//             return true;
//         }
//         return false;
//     }
// };

// approach 2
class queue
{

    stack<int> s1;

public:
    void enqueue(int val)
    {
        s1.push(val);
    }

    int dequeue()
    {
        if (s1.empty())
        {
            cout << "Queue is empty. \n";
            return -1;
        }

        int x = s1.top();
        s1.pop();
        if (s1.empty())
        {
            return x; // providing the value of 'x'to 'res' at the end of recursion
        }
        int res = dequeue(); //'res' is storing the value of x defined at the end of recursion
        s1.push(x);
        return res;
    }

    bool empty()
    {
        if (s1.empty())
        {
            return true;
        }
        return false;
    }
};

int main()
{
    queue que;
    que.enqueue(1);
    que.enqueue(2);
    que.enqueue(3);
    que.enqueue(4);
    cout << que.dequeue() << endl;
    cout << que.dequeue() << endl;
    cout << que.dequeue() << endl;
    cout << que.dequeue() << endl;

    return 0;
}