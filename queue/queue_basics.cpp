#include <iostream>
using namespace std;
#define n 20

// FIFO- first in first out
// back side ,in ,i.e. -> and front side ,out, i.e. ->
class queue
{

    int *arr;
    int front;
    int back;

public:
    queue()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void push(int x) // enqueue()
    {
        if (back == n - 1)
        {
            cout << "Queue Overflow\n";
            return;
        }

        back++;
        arr[back] = x;
        if (front == -1)
            front++;
    }

    void pop() // dequeue()
    {
        if (front == -1 || front > back)
        {
            cout << "No elements in Queue\n";
            return;
        }
        front++;
    }

    int peek() // top()
    {
        if (front == -1 || front > back)
        {
            cout << "No elements in Queue\n";
            return -1;
        }
        return arr[front];
    }

    bool empty()
    {
        if (front == -1 || front > back)
            return true;
        return false;
    }
};

int main()
{
    queue que;
    que.push(1);
    que.push(2);
    que.push(3);
    que.push(4);

    cout << que.peek() << endl;
    que.pop();

    cout << que.peek() << endl;
    que.pop();

    cout << que.peek() << endl;
    que.pop();

    cout << que.peek() << endl;
    que.pop();

    cout << que.empty() << endl;

    return 0;
}