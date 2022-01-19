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

node *mergeSort(node *&head1, node *&head2)
{
    node *dummyNode = new node(-1);

    node *ptr1 = head1;     // traverse through head1
    node *ptr2 = head2;     // traverse through head2
    node *ptr3 = dummyNode; // traverse through dummyNode

    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1->data < ptr2->data)
        {
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
            ptr3 = ptr3->next;
        }

        else
        {
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
            ptr3 = ptr3->next;
        }
    }

    while (ptr1 != NULL)
    {
        ptr3->next = ptr1;
        ptr1 = ptr1->next;
        ptr3 = ptr3->next;
    }

    while (ptr2 != NULL)
    {
        ptr3->next = ptr2;
        ptr2 = ptr2->next;
        ptr3 = ptr3->next;
    }
    // there is no need to locate the last block to the NULL pointer address bcaz it actually extracting the blocks from the original data1 and data2 nodes
    return dummyNode->next;
}

node *mergeSortRec(node *&head1, node *&head2)
{
    if (head1 == NULL)
        return head2;

    if (head2 == NULL)
        return head1;

    node *result;
    if (head1->data < head2->data)
    {
        result = head1;
        result->next = mergeSortRec(head1->next, head2);
    }
    else
    {
        result = head2;
        result->next = mergeSortRec(head1, head2->next);
    }

    return result;
}

int main()
{
    node *head1 = NULL;
    node *head2 = NULL;
    int arr1[] = {1, 4, 5, 7};
    int arr2[] = {2, 3, 6};

    for (int i = 0; i < 4; i++)
        head1->insertAtTail(head1, arr1[i]);
    head1->print(head1);

    for (int i = 0; i < 3; i++)
        head2->insertAtTail(head2, arr2[i]);
    head2->print(head2);

    // node *newhead = mergeSort(head1, head2);
    // newhead->print(newhead);

    node *newhead = mergeSortRec(head1, head2);
    newhead->print(newhead);

    return 0;
}