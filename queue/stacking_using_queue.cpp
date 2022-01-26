#include <iostream>
#include <queue>
using namespace std;

class stack
{
    int N;
    queue<int> q1;
    queue<int> q2;

public:
    stack()
    {
        N = 0;
    }

    void push(int val)
    {
        q1.push(val);
        N++;
    }

    void pop()
    {
        if (q1.empty())
            return;

        while (q1.size() != 1)
        {
            q2.push(q1.front());
            q1.pop();
        }

        q1.pop();
        N--;

        swap(q2, q1);
    }

    int top()
    {
        if (q1.empty())
            return -1;

        while (q1.size() != 1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int ans = q1.front();
        q2.push(ans); // we are again pushing the last value bcaz we are only required to display the top value
        q1.pop();

        swap(q1, q2);
        return ans;
    }

    int size()
    {
        return N;
    }
};

int main()
{
    stack stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);

    cout << stk.top() << endl;
    stk.pop();
    cout << stk.top() << endl;
    cout << stk.size() << endl;
    return 0;
}