#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;

    node(int val)
    {
        data = val;
        prev = NULL;
        next = NULL;
    }

    void insertAtHead(node *&head, int val)
    {
        node *n = new node(val);
        n->next = head;
        if (head != NULL)
        {
            head->prev = n;
        }
        head = n;
        return;
    }

    void insertAtTail(node *&head, int val)
    {

        if (head == NULL)
        {
            insertAtHead(head, val);
            return;
        }
        node *n = new node(val);
        node *temp = head;
        while (temp->next != 0)
        {
            temp = temp->next;
        }

        temp->next = n;
        n->prev = temp;
    }

    void deletion(node *&head, int pos)
    {
        if (pos == 1) // if the deletion taken from the first position
        {
            node *todelete = head;
            head = head->next;
            head->prev = NULL;
            delete todelete;

            return;
        }

        if (head == NULL)
        {
            return;
        }

        node *temp = head;
        int count = 1;
        while (temp != NULL && count != pos)
        {
            temp = temp->next;
            count++;
        }
        // temp == the node that is going to remove
        temp->prev->next = temp->next;
        if (temp->next != NULL) // if deletion taken from the last position
        {
            temp->next->prev = temp->prev;
        }
        delete temp;
    }

    void display(node *head)
    {
        while (head != NULL)
        {
            cout << head->data << "->";
            head = head->next;
        }
        cout << "NULL\n";
    }
};

int main()
{
    node *head;
    head->insertAtTail(head, 1);
    head->insertAtTail(head, 2);
    head->insertAtTail(head, 3);
    head->display(head);

    head->insertAtHead(head, 4);
    head->display(head);

    head->deletion(head, 2);
    head->display(head);

    return 0;
}