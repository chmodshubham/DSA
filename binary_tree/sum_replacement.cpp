#include <bits/stdc++.h>
using namespace std;

// replace nodes value with the sum of its sub-tree and it's own value

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

void sum_replacement(node *&root)
{
    if (root == NULL)
        return;
    sum_replacement(root->left);
    sum_replacement(root->right);

    if (root->left != NULL)
    {
        root->data += root->left->data;
    }

    if (root->right != NULL)
    {
        root->data += root->right->data;
    }
}

void inorder(node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
    else
        return;
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

    inorder(root);
    cout << endl;
    sum_replacement(root);
    inorder(root);
}
// time complexity = O(n)