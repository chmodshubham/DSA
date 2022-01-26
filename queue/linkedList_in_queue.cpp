#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next = NULL;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

class queue
{
public:
    node *front = NULL;
    node *back = NULL;
    queue()
    {
        front = NULL;
        back = NULL;
    }

    void push(int val)
    {
        node *n = new node(val);
        if (front == NULL)
        {
            front = n;
            back = n;
        }
        back->next = n;
        back = n;
    }

    void pop()
    {
        if (front == NULL)
        {
            cout << "No element to pop\n";
            return;
        }
        node *todelete = front;
        front = front->next;
        delete todelete;
    }

    int peek()
    {
        if (front == NULL)
        {
            cout << "No element to peek\n";
            return -1;
        }
        return front->data;
    }

    bool empty()
    {
        if (front == NULL) // checked for both the cases i.e. when the queue is not formed (front==NULL) and when it exceeds the back() , pointing to the next element of the back() i.e. NULL
        {
            return true;
        }
        return false;
    }
};

int main()
{
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << q.peek() << endl;
    q.pop();

    cout << q.peek() << endl;
    q.pop();

    cout << q.peek() << endl;
    q.pop();

    cout << q.peek() << endl;
    q.pop();

    cout << q.empty() << endl;

    return 0;
}