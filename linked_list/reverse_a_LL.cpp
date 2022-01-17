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
    // iterative way of reversing the linklist
    node *reverse(node *&head)
    {
        node *prevptr = NULL;
        node *currptr = head;
        node *nextptr;
        while (currptr != NULL)
        {
            nextptr = currptr->next;
            currptr->next = prevptr;

            prevptr = currptr;
            currptr = nextptr;
        }
        return prevptr; // here prevptr store the last block element
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

node *reverseLL(node *&head) // reverse_LinkList recursively
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *newhead = reverseLL(head->next);
    head->next->next = head; // to understand this dont think about each condition just focus on the first block ,how the changes occur in the first block only . the same thing apply recursively for the rest of the condition.
    head->next = NULL;
    return newhead;
}

int main()
{
    node *head = NULL;
    head->insertAtTail(head, 1);
    head->insertAtTail(head, 2);
    head->insertAtTail(head, 3);
    head->print(head);

    // head->insertAtHead(head, 4);
    // head->print(head);

    // node *newhead;
    // newhead = newhead->reverse(head);
    // newhead->print(newhead);

    node *newhead;
    newhead = reverseLL(head);
    newhead->print(newhead);

    return 0;
}