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

    void insertAtHead(node *&head, int val)
    {
        node *n = new node(val);
        if (head == NULL)
        {
            n->next = n;
            head = n;
            return;
        }
        node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        // do
        // {
        //     temp = temp->next;
        // } while (temp->next != head);
        temp->next = n;
        n->next = head;
        head = n;
        return;
    }

    void insertAtTail(node *&head, int val) // for circular LL
    {

        if (head == NULL)
        {
            insertAtHead(head, val);
            return;
        }
        node *n = new node(val);
        node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = n;
        n->next = head;
        return;
    }

    void deleteAtHead(node *&head)
    {
        node *temp = head;
        node *todelete = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        head = head->next;
        temp->next = head;
        delete todelete;
    }

    void deletion(node *&head, int pos)
    {

        if (pos == 1)
        {
            deleteAtHead(head);
            return;
        }
        node *temp = head;
        int count = 1;
        while (count != pos - 1)
        {
            temp = temp->next;
            count++;
        }
        node *todelete = temp->next;
        temp->next = temp->next->next;
        delete todelete;
    }

    void display(node *head)
    {
        node *temp = head;
        do
        {
            cout << temp->data << "->";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }
};

int main()
{
    node *head = NULL;
    head->insertAtTail(head, 1);
    head->insertAtTail(head, 2);
    head->insertAtTail(head, 3);
    head->insertAtTail(head, 4);

    head->display(head);
    head->insertAtHead(head, 5);
    head->display(head);

    head->deletion(head, 5);
    head->display(head);

    head->deletion(head, 1);
    head->display(head);
    return 0;
}