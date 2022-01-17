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

    void deletionAtHead(node *&head)
    {
        node *todelete = head->next;
        head = head->next;
        delete todelete;
        return;
    }

    void deletion(node *&head, int val)
    {
        // these 2 if condition statement are corner points and it is good practice to ensure all corner points
        if (head == NULL) // when no elements present
        {
            return;
        }

        if (head->next == NULL /*head->next is pointing to the current block 'next' pointer which was storing NUll as value*/) // when only 1 element is present in head
        {
            deletionAtHead(head);
            return;
        }

        node *temp = head;
        while (temp->next->data != val) // here temp->next->data actually saying that be in the loop until temp->next(next block address)->data(next block address data) becomes zero .
        {
            temp = temp->next;
        }
        //  it break from the point just before coming to the temp->data=val.
        node *todelete = temp->next; // temp->next is pointing to the 'next' pointer of the current block which was storing next block address therefore todelete is storing the address of the next block.
        // we can proceed without making this variable 'todelete' but we are making this to ensure that no data should be left in the memory (basically there is no memory leak)
        temp->next = temp->next->next;
        delete todelete; // here we are deleting the pointer todelete to ensure no data leak.
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

int main()
{
    node *head = NULL;
    head->insertAtTail(head, 1);
    head->insertAtTail(head, 2);
    head->insertAtTail(head, 3);
    head->print(head);

    head->insertAtHead(head, 4);
    head->print(head);

    head->deletionAtHead(head);
    head->print(head);

    head->deletion(head, 2);
    head->print(head);
    return 0;
}