#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next; // pointer variable to point the next block element
    // block = node

    node(int val) // constructor
    {
        data = val;
        next = NULL;
    }

    void insertAtTail(node *&head /*calling by refrence*/, int val)
    {
        node *n = new node(val); // creating a block of element of node type,that is to be added in the linklist

        if (head == NULL)
        {
            head = n;
            return;
        }

        node *temp = head;         // creating a pointer variable which starts from the first block (call by using address of the current block)
        while (temp->next != NULL) // checking till 'temp' next block have NULL address as head is empty at the beginning (so we dont use temp==NULL as it ends the loop in the beginning itself)
        {
            temp = temp->next; // putting the address of the next block in the current block of 'temp'.
        }

        temp->next = n; //  one important thing ,here ,we are providing the address of the next block ,that is going to contain 'n', in the 'next' pointer of the current block .And due to this address providing ,it makes the linklist add a new block automatically as the last block must have a null address(in simple words ,we are putting the value 'n' of node type into the end of the linked list )
    }

    void insertAtHead(node *&head, int val)
    {
        node *n = new node(val);
        n->next = head; // putting the address of current block of head into n->next(means 'next' pointer of n storing the address of current block of head)
        head = n;       // this means we are making the first block address of 'head' as the address of 'n'.
    }

    bool search(node *head, int key)
    {
        node *temp = head;
        while (temp != NULL) // using temp means we are providing the address of the current block whereas temp->next is used to point the next address

        {
            if (temp->data == key)
                return true;

            temp = temp->next; // putting the address of the next block in the pointer address of current block.
        }
        return false;
    }

    void display(node *head)
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
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
    head->display(head);
    head->insertAtHead(head, 4);
    head->display(head);
    cout << head->search(head, 2) << endl;

    return 0;
}