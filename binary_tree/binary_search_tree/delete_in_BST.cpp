#include <bits/stdc++.h>
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

node *inorder_successor(node *root)
{
    while (/*root != NULL &&*/ root->left != NULL)
    {
        root = root->left;
    }
    return root;
}

node *delete_in_BST(node *root, int key)
{
    if (key == root->data)
    {
        if (root->left == NULL and root->right == NULL)
        {
            delete root;
            return NULL;
        }

        else if (root->left == NULL)
        {
            node *temp = root->right;
            delete root;
            return temp;
        }

        else if (root->right == NULL)
        {
            node *temp = root->left;
            delete root;
            return temp;
        }

        else // root->left != NULL && root->right != NULL
        {
            node *temp = inorder_successor(root->right);          // store the inorder_successor of the root i.e. next element of the inorder sequence of the tree
            root->data = temp->data;                              // storing the value of the inorder successor of the current node in the current node data
            root->right = delete_in_BST(root->right, temp->data); // moving to the right node of the root and calling for the delete function that deletes the node having value equal to inorder_successor(temp)
        }
    }
    else if (key < root->data)
        root->left = delete_in_BST(root->left, key); // push the updated left sub-tree in the root->left
    else if (key > root->data)
        root->right = delete_in_BST(root->right, key); // push the updated right sub-tree in the root->right

    return root;
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
    root = new node(4);
    root->left = new node(2);
    root->right = new node(5);
    root->left->left = new node(1);
    root->left->right = new node(3);

    root->right->right = new node(6);

    inorder(root);
    cout << endl;
    root = delete_in_BST(root, 2);
    inorder(root);
}