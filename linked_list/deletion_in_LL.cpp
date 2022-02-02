#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next = NULL;
    /*Create a 'node' of class datatype which contain 2 datatypes, one stores data and another is a pointer variable 'next' that stores the address of the next node. It is a good practice to initialise  a pointer with NULL value.*/

    node(int val)
    {
        /*After that , a parameterised constructor is initialised which will be executed whenever we create new objects of that class. Then, we create a number of functions.*/
        data = val;
        next = NULL;
    }

    // functions
    void insertAtTail(node *&head, int val);
    void insertAtHead(node *&head, int val);
    void deletionAtHead(node *&head);
    void deletion(node *&head, int val);
    void print(node *head);
};

void node::insertAtTail(node *&head /*call by refrence*/, int val) // add node at the end
{
    node *n = new node(val); // create a variable 'n' of the dataype 'node'
    if (head == NULL)        // check ,if the linked list is not empty
    {
        head = n; // add 'n' to the linked list
        return;
    }

    node *temp = head;         // here we create a pointer which traverse through the linked list 'head'
    while (temp->next != NULL) // loop is executed till the next node points to a NULL address
    {
        temp = temp->next; // traversing in linked list
    }
    //'temp' is pointing to the last node
    temp->next = n; // add a new node at the end of the linked list by pointing the last node to 'n'
}

void node::insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head; // pointing to the 'head' address
    head = n;       // change the linked list 'head'
    return;
}

void node::deletionAtHead(node *&head)
{
    node *todelete = head; // store the address of the first node
    head = head->next;     // move the linked list head to the next node
    delete todelete;       // delete the pointer that address first node
    // delete is used to save us from memory loss
    return;
}

void node::deletion(node *&head, int val)
{
    if (head == NULL) // check whether linked list is empty or not
    {
        return;
    }

    if (head->next == NULL)
    {
        deletionAtHead(head);
        return;
    }

    node *temp = head;
    while (temp->next->data != val) // loop is executed till the next node 'data' becomes equals to 'val'
    {
        temp = temp->next;
    }

    node *todelete = temp->next;   // now, a pointer is used to store the address of the next node
    temp->next = temp->next->next; // breaking the link with the next node and connect with the node present next to next node
    delete todelete;
}

void node::print(node *head /*call by value*/) // print the linked list
{
    while (head != NULL) // loop executes till the head points to a NULL address i.e. after the end node
    {
        cout << head->data << "->"; // accessing the data of the class datatpe variable
        head = head->next;          // move 1-step forward
    }
    cout << "NULL" << endl;
}

// main function
int main()
{
    node *head = NULL; // create a variable with datatype node (we add a '*' because it stores an address too)
    // calling functions
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