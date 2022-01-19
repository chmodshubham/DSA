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

void intersection(node *&head1, node *&head2, int pos)
{
    node *temp1 = head1;
    pos--;
    while (pos != 0)
    {
        pos--;
        temp1 = temp1->next;
    }
    node *temp2 = head2;
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }
    temp2->next = temp1;
}

int intersectionPos(node *&head1, node *&head2)
{
    int l1 = lenght(head1);
    int l2 = lenght(head2);
    node *ptr1;
    node *ptr2;
    int diff;
    if (l1 > l2)
    {
        diff = l1 - l2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else
    {
        diff = l2 - l1;
        ptr1 = head2;
        ptr2 = head1;
    }

    while (diff != 0)
    {
        ptr1 = ptr1->next;
        diff--;
    }

    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1 == ptr2)
        {
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    node *head1 = NULL;
    for (int i = 0; i < 6; i++)
    {
        head1->insertAtTail(head1, arr[i]);
    }

    node *head2 = NULL;
    head2->insertAtTail(head2, 8);
    head2->insertAtTail(head2, 9);

    intersection(head1, head2, 5);
    head1->print(head1);
    head2->print(head2);

    cout << intersectionPos(head1, head2) << endl;

    return 0;
}

// time complexity
// t()= O(l1)