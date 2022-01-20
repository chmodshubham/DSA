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

int lenght(node *head)
{
    int l = 1;
    while (head->next != NULL)
    {
        l++;
        head = head->next;
    }
    return l;
}

void ArrangeNode(node *&head)
{
    int l = lenght(head);
    node *oddptr = head;
    node *evenptr = head->next;
    node *evenStart = evenptr;

    while (oddptr->next != NULL && evenptr->next != NULL)
    {
        oddptr->next = evenptr->next;
        oddptr = oddptr->next;
        evenptr->next = oddptr->next;
        evenptr = evenptr->next;
    }

    oddptr->next = evenStart;
    if (oddptr->next == NULL)
        evenptr->next = NULL;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    node *head = NULL;
    for (int i = 0; i < 6; i++)
    {
        head->insertAtTail(head, arr[i]);
    }
    head->print(head);

    ArrangeNode(head);
    head->print(head);
    return 0;
}
