#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }

    void insertAtTail(node *&head, int val)
    {
        node *n = new node(val);
        if (head == NULL)
        {
            head = n;
            return;
        }

        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = n;
    }

    void insertAtHead(node *&head, int val)
    {
        node *n = new node(val);
        n->next = head;
        head = n;
        return;
    }

    void makecycle(node *&head, int pos)
    {
        node *temp = head;
        node *cycleStart;
        int count = 1;
        while (temp->next != NULL) // temp->next is pointing to the pointer variable 'next' of the current node which stores the address of the next node
        // node = block
        {

            if (count == pos)
            {
                cycleStart = temp;
            }
            temp = temp->next;
            count++;
        }
        temp->next = cycleStart;
    }

    void print(node *head)
    {
        while (head != NULL)
        {
            cout << head->data << "->";
            head = head->next;
        }
        cout << "NULL" << endl;
    }
};

bool detectCycle(node *&head) // hare and tortoise algorithm
{
    node *slow = head;
    node *fast = head;
    while (fast != NULL) // here fast->next is not acceptable becaz may be a situation comes where 'fast' is not positioned on a node , at that time, it actually check for its own address i.e. NULL
    {
        slow = slow->next;       // move 1 step
        fast = fast->next->next; // move 2 steps
        if (slow == fast)
            return true;
    }
    return false;
}

void removeCycle(node *&head) // assuming cycle is present
{
    node *slow = head;
    node *fast = head;
    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);

    fast = head;
    while (fast->next != slow->next)
    {
        fast = fast->next;
        slow = slow->next;
    }

    slow->next = NULL;
    return;
}

int main()
{
    node *head = NULL;
    head->insertAtTail(head, 1);
    head->insertAtTail(head, 2);
    head->insertAtTail(head, 3);
    head->insertAtTail(head, 4);
    head->insertAtTail(head, 5);
    head->insertAtTail(head, 6);
    head->print(head);

    head->makecycle(head, 3);
    cout << detectCycle(head) << endl;

    removeCycle(head);
    cout << detectCycle(head) << endl;
    head->print(head);

    return 0;
}