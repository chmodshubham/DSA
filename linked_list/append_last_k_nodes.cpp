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
    int l = 0;
    while (head != NULL) // basically we use condition head != NULL bcaz we assign 0 to the variable 'l' and in order to put condition head->next!=NULL we have to assign 1 to 'l'.
    {
        head = head->next;
        l++;
    }
    return l;
}

node *kAppend(node *&head, int k)
{
    node *newhead;
    node *tail = head;
    node *newtail;

    int l = lenght(head);
    int count = 1;
    k = k % l; // to check whether the value of 'k' do not exceed 'l'
    while (tail->next != NULL)
    {
        if (count == l - k)
        {
            newtail = tail;
        }
        if (count == l - k + 1)
        {
            newhead = tail;
        }

        tail = tail->next;
        count++;
    }

    newtail->next = NULL;
    tail->next = head;

    return newhead;
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

    node *newhead = NULL;
    newhead = kAppend(head, 3);
    newhead->print(newhead);
    return 0;
}