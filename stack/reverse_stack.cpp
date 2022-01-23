#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &stk, int stktop)
{
    if (stk.empty())
    {
        stk.push(stktop); // pushing the stktop at the bottom
        return;
    }
    int element = stk.top();
    stk.pop();
    insertAtBottom(stk, stktop);

    stk.push(element); // this actually inserting the rest of the elements in the stack recursively
}

void reverseStack(stack<int> &stk)
{
    if (stk.empty())
    {
        return;
    }
    int stkTop = stk.top();
    stk.pop();
    reverseStack(stk);
    insertAtBottom(stk, stkTop); // calling this function in order to insert the element at the bottom
}

int main()
{
    stack<int> stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);
    reverseStack(stk);
    while (stk.empty() != 1)
    {
        cout << stk.top() << " ";
        stk.pop();
    }

    return 0;
}