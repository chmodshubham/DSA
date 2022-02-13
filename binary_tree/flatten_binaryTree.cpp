#include <bits/stdc++.h>
#include <iostream>
using namespace std;

struct node
{
    int data;
    node *left = NULL;
    node *right = NULL;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void flatten(node *root) // convert into linked list
{
    if (root == NULL || (root->left == NULL and root->right == NULL))
        return;

    if (root->left != NULL)
    {
        flatten(root->left);

        node *temp = root->right; // construct a temporary pointer to point the right sub-tree
        root->right = root->left; // then attach the left subtree to the right part of root
        root->left = NULL;        // make the left node of the root be NULL

        node *t = root->right; // now create a temporary pointer to traverse the left subtree that is attached to the right part of the root node
        while (t->right != NULL)
        {
            t = t->right;
        }
        // after the loop ends the 't' points to the end part of the right attached left tree
        t->right = temp; // now connect the right part of 't' with the deattached right subtree and make a complete linked list
    }

    flatten(root->right);
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
    node *root = NULL;
    root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);

    root->right->left = new node(6);
    root->right->right = new node(7);
    // inorder(root);
    // cout << endl
    //      << endl;
    flatten(root);
    inorder(root);
    cout << endl;

    return 0;
}