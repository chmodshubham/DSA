#include <iostream>
using namespace std;
#define n 100

class stack
{

    int *arr;
    int top;

public:
    stack()
    {
        arr = new int[n];
        top = -1;
    }

    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "stack overflow\n";
            return;
        }

        top++;
        arr[top] = x;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << " no element to pop\n";
            return;
        }
        top--;
    }

    int Top()
    {
        if (top == -1)
        {
            cout << " no element in stack\n";
            return -1;
        }
        return arr[top];
    }

    bool empty()
    {
        if (top == -1)
        {
            return true;
        }
        return false;
    }
    void display()
    {
        for (int i = 0; i < top + 1; i++)
        {
            cout << *(arr + i) << " ";
        }
        cout << endl;
    }
};

int main()
{
    stack stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);
    cout << stk.Top() << endl;
    stk.display();

    stk.pop();
    stk.display();
    cout << stk.Top() << endl;

    cout << stk.empty();

    return 0;
}