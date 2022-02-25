#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left, *right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void calculate_pointers(node *root, node **first, node **last, node **mid, node **prev)
{
    if (root == NULL)
        return;

    calculate_pointers(root->left, first, last, mid, prev);

    if (*prev && root->data < (*prev)->data)
    {
        if (!(*first))
        {
            *first = *prev;
            *mid = root;
        }
        else
        {
            *last = root;
        }
    }
    *prev = root;
    calculate_pointers(root->right, first, last, mid, prev);
}

void recover_BST(node *root)
{
    node *first, *last, *mid, *prev;
    first = NULL;
    last = NULL;
    mid = NULL;
    prev = NULL;

    calculate_pointers(root, &first, &last, &mid, &prev);

    if (first && last /*checking if first and last pointer is not NULL*/) // case 1
        swap(first->data, last->data);

    else if (first && mid) // case2
        swap(first->data, mid->data);
}

void inorder(node *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{
    node *root = new node(6);
    root->left = new node(9);
    root->right = new node(3);

    root->left->left = new node(1);
    root->left->right = new node(4);

    root->right->right = new node(13);

    inorder(root);
    cout << endl;
    recover_BST(root);
    inorder(root);
}